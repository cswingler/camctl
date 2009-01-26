/*
 * Copyright (c) 2009 Stephen Williams (steve@icarus.com)
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

# include  <qapplication.h>
# include  "CamtoolMain.h"
# include  <QMessageBox>

using namespace std;

void CamtoolMain::grab_camera_(void)
{
      selected_camera_->open_session();

      vector<string> exposure_time_enum;
      selected_camera_->get_exposure_time_index(exposure_time_enum);
      int ext_cur = selected_camera_->get_exposure_time_index();

      ui.set_exposure_time_box->clear();
      for (size_t idx = 0 ; idx < exposure_time_enum.size() ; idx += 1) {
	    ui.set_exposure_time_box->addItem(exposure_time_enum[idx].c_str());
      }
      ui.set_exposure_time_box->setCurrentIndex(ext_cur);
      ui.set_exposure_time_box->setEnabled(exposure_time_enum.size() > 0);
}

void CamtoolMain::ungrab_camera_(void)
{
      selected_camera_->close_session();
      ui.set_exposure_time_box->setEnabled(false);
}
