#ifndef __MacICACameraControl_H
#define __MacICACameraControl_H
/*
 * Copyright (c) 2008-2009 Stephen Williams (steve@icarus.com)
 *
 *    This source code is free software; you can redistribute it
 *    and/or modify it in source code form under the terms of the GNU
 *    General Public License as published by the Free Software
 *    Foundation; either version 2 of the License, or (at your option)
 *    any later version.
 *
 *    This program is distributed in the hope that it will be useful,
 *    but WITHOUT ANY WARRANTY; without even the implied warranty of
 *    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *    GNU General Public License for more details.
 *
 *    You should have received a copy of the GNU General Public License
 *    along with this program; if not, write to the Free Software
 *    Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA
 */

/*
 * The MacICACameraControl class implements camera control that uses
 * Mac OS X ImageCapture. This is actually a category of interfaces
 * that use the Mac OS X ICA as a pass-through interface for advanced
 * controls.
 */

# include  "CameraControl.h"
# include  <ImageCapture/ICAApplication.h>
# include  <map>
# include  <inttypes.h>

class MacICACameraControl : public CameraControl {

    public:
	// Inventory this kind of object.
      static void camera_inventory(void);

    protected:
      MacICACameraControl(ICAObject dev);
    public:
      ~MacICACameraControl();

      std::string control_class(void) const;
      std::string camera_make(void) const;

      int open_session(void);
      int close_session(void);

      std::string camera_model(void) const;
      float battery_level(void) const;

    public:
      void capture_image(void);
      void get_image_data(long key, char*&buf, size_t&buf_len);

      void debug_dump(std::ostream&, const std::string&) const;

    protected:
	// A USB id is a Vendor/Device pair
      typedef std::pair<uint16_t,uint16_t> usb_id_t;
	// A Device name is a Vendor/Device string pair
      typedef std::pair<std::string,std::string> dev_name_t;
	// A device class is the derived class that supports this
	// device.
      enum dev_class_t {
	    MacGeneric = 0,
	    MacPTP
      };

      static const dev_name_t&id_to_name(const usb_id_t&id);
      static const dev_class_t id_to_class(const usb_id_t&id);

    protected:
      static long get_dict_long_value(CFDictionaryRef, const char*key);
      static std::string get_dict_string_value(CFDictionaryRef, const char*key);

      long get_dev_prop_long_value_(const char*key);

      void ica_send_message_(void*buf, size_t buf_len);

    private:
	// The id_to_* functions use maps of device ids to the desired
	// type. These methods provide the infrastructure for mapping
	// device identification to the proper implementation.
      static void load_usb_map(void);
      static std::map <usb_id_t,dev_name_t>  usb_map_names;
      static std::map <usb_id_t,dev_class_t> usb_map_classes;

    private:
      ICAObject dev_;
      CFDictionaryRef dev_dict_;
      CFDictionaryRef dev_prop_dict_;

      ICASessionID session_id_;

      dev_name_t make_model_;

    private:
      void scan_images(std::list<file_key_t>&);

      void debug_dump_default_(std::ostream&) const;
      void debug_dump_capabilities_(std::ostream&) const;
      void debug_dump_data_(std::ostream&) const;
      void debug_dump_device_(std::ostream&) const;
};

/*
 * This class is derived from MacICACameraControl to provide a camera
 * control for PTP cameras. PTP Cameras use MacICA as the interface,
 * but also uses PTP commands that are passed through via ICA
 * functions.
 */
class MacPTPCameraControl  : public MacICACameraControl {

    private:
	// The camera_inventory function from MacICACameraControl
	// actually creates objects of this type.
      friend void MacICACameraControl::camera_inventory(void);
      MacPTPCameraControl(ICAObject dev);

    public:
      ~MacPTPCameraControl();

    public:
      virtual void get_exposure_time_index(std::vector<std::string>&values);
      virtual int  get_exposure_time_index();
      virtual void set_exposure_time_index(int);

    public:
	// Debug aids
      virtual int debug_property_get(unsigned prop, unsigned dtype,
				     unsigned long&value);
      virtual int debug_property_set(unsigned prop, unsigned dtype,
				     unsigned long value);
      virtual std::string debug_property_describe(unsigned prop);

    private:
      void ptp_set_property_u16_(unsigned prop_code, uint16_t val, uint32_t&rc);
      void ptp_set_property_u32_(unsigned prop_code, uint32_t val, uint32_t&rc);
      uint16_t ptp_get_property_u16_(unsigned prop_code, uint32_t&rc);
      uint32_t ptp_get_property_u32_(unsigned prop_code, uint32_t&rc);

};

#endif