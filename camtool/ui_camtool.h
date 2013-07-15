/********************************************************************************
** Form generated from reading UI file 'camtool.ui'
**
** Created: Mon Jul 15 10:57:15 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAMTOOL_H
#define UI_CAMTOOL_H

#include <QtCore/QVariant>
//#include <QtGui/QAction>
#include <QtWidgets/QAction>
//#include <QtGui/QApplication>
#include <QtWidgets/QApplication>
//#include <QtGui/QButtonGroup>
#include <QtWidgets/QButtonGroup>
//#include <QtGui/QCheckBox>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBox>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <QtCore/QCoreApplication>
#include "HMSSpinBox.h"

QT_BEGIN_NAMESPACE

class Ui_CamtoolMainWidget
{
public:
    QAction *help_about_action;
    QAction *help_about_camera_action;
    QAction *preferences_action;
    QAction *tools_preview;
    QAction *tools_debug;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout;
    QPushButton *action_capture_button;
    QPushButton *action_tethered_button;
    QPushButton *action_timelapse_button;
    QSpacerItem *horizontalSpacer_3;
    QCheckBox *zoom_check;
    QPushButton *action_file_button;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QGraphicsView *action_thumbnail_view;
    QSpacerItem *verticalSpacer_2;
    QGraphicsView *preview_charts;
    QTabWidget *tabWidget;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_5;
    QToolBox *toolBox;
    QWidget *page_3;
    QVBoxLayout *verticalLayout_2;
    QComboBox *camera_list_box;
    QCheckBox *grab_check_box;
    QSpacerItem *verticalSpacer_4;
    QWidget *page;
    QFormLayout *formLayout;
    QLabel *label_5;
    QComboBox *exposure_program_box;
    QLabel *label;
    QComboBox *set_iso_box;
    QLabel *label_3;
    QComboBox *set_aperture_box;
    QLabel *label_4;
    QComboBox *set_exposure_time_box;
    QWidget *page_2;
    QFormLayout *formLayout_2;
    QLabel *label_6;
    QComboBox *flash_mode_box;
    QLabel *label_8;
    QComboBox *focus_mode_box;
    QLabel *label_2;
    QComboBox *image_size_box;
    QLabel *label_7;
    QComboBox *white_balance_box;
    QWidget *page_4;
    QGridLayout *gridLayout;
    QLabel *label_9;
    HMSSpinBox *capture_interval;
    QLabel *label_10;
    HMSSpinBox *sequence_duration;
    QSpacerItem *verticalSpacer;
    QWidget *tab_4;
    QVBoxLayout *verticalLayout_7;
    QListWidget *images_list;
    QHBoxLayout *horizontalLayout_6;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *refresh_button;
    QGraphicsView *preview_image;
    QHBoxLayout *horizontalLayout_8;
    QLabel *camera_label;
    QLCDNumber *battery_display;
    QMenuBar *menuBar;
    QMenu *menuHelp;
    QMenu *menuFile;
    QMenu *menuTools;

    void setupUi(QMainWindow *CamtoolMainWidget)
    {
        if (CamtoolMainWidget->objectName().isEmpty())
            CamtoolMainWidget->setObjectName(QString::fromUtf8("CamtoolMainWidget"));
        CamtoolMainWidget->resize(1144, 695);
        help_about_action = new QAction(CamtoolMainWidget);
        help_about_action->setObjectName(QString::fromUtf8("help_about_action"));
        help_about_camera_action = new QAction(CamtoolMainWidget);
        help_about_camera_action->setObjectName(QString::fromUtf8("help_about_camera_action"));
        preferences_action = new QAction(CamtoolMainWidget);
        preferences_action->setObjectName(QString::fromUtf8("preferences_action"));
        tools_preview = new QAction(CamtoolMainWidget);
        tools_preview->setObjectName(QString::fromUtf8("tools_preview"));
        tools_preview->setCheckable(true);
        tools_debug = new QAction(CamtoolMainWidget);
        tools_debug->setObjectName(QString::fromUtf8("tools_debug"));
        centralwidget = new QWidget(CamtoolMainWidget);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_4 = new QVBoxLayout(centralwidget);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        action_capture_button = new QPushButton(centralwidget);
        action_capture_button->setObjectName(QString::fromUtf8("action_capture_button"));

        horizontalLayout->addWidget(action_capture_button);

        action_tethered_button = new QPushButton(centralwidget);
        action_tethered_button->setObjectName(QString::fromUtf8("action_tethered_button"));

        horizontalLayout->addWidget(action_tethered_button);

        action_timelapse_button = new QPushButton(centralwidget);
        action_timelapse_button->setObjectName(QString::fromUtf8("action_timelapse_button"));
        action_timelapse_button->setCheckable(true);
        action_timelapse_button->setChecked(false);

        horizontalLayout->addWidget(action_timelapse_button);

        horizontalSpacer_3 = new QSpacerItem(288, 17, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        zoom_check = new QCheckBox(centralwidget);
        zoom_check->setObjectName(QString::fromUtf8("zoom_check"));
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(zoom_check->sizePolicy().hasHeightForWidth());
        zoom_check->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(zoom_check);

        action_file_button = new QPushButton(centralwidget);
        action_file_button->setObjectName(QString::fromUtf8("action_file_button"));

        horizontalLayout->addWidget(action_file_button);


        verticalLayout_4->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        action_thumbnail_view = new QGraphicsView(centralwidget);
        action_thumbnail_view->setObjectName(QString::fromUtf8("action_thumbnail_view"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(236);
        sizePolicy1.setVerticalStretch(140);
        sizePolicy1.setHeightForWidth(action_thumbnail_view->sizePolicy().hasHeightForWidth());
        action_thumbnail_view->setSizePolicy(sizePolicy1);
        action_thumbnail_view->setMinimumSize(QSize(236, 140));
        action_thumbnail_view->setMaximumSize(QSize(236, 140));

        verticalLayout->addWidget(action_thumbnail_view);

        verticalSpacer_2 = new QSpacerItem(20, 28, QSizePolicy::Minimum, QSizePolicy::Minimum);

        verticalLayout->addItem(verticalSpacer_2);


        horizontalLayout_2->addLayout(verticalLayout);

        preview_charts = new QGraphicsView(centralwidget);
        preview_charts->setObjectName(QString::fromUtf8("preview_charts"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(130);
        sizePolicy2.setVerticalStretch(180);
        sizePolicy2.setHeightForWidth(preview_charts->sizePolicy().hasHeightForWidth());
        preview_charts->setSizePolicy(sizePolicy2);
        preview_charts->setMinimumSize(QSize(130, 180));
        preview_charts->setMaximumSize(QSize(130, 16777215));
        preview_charts->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        preview_charts->setBackgroundBrush(brush);
        preview_charts->setAlignment(Qt::AlignHCenter|Qt::AlignTop);

        horizontalLayout_2->addWidget(preview_charts);


        verticalLayout_3->addLayout(horizontalLayout_2);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tabWidget->sizePolicy().hasHeightForWidth());
        tabWidget->setSizePolicy(sizePolicy3);
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_5 = new QVBoxLayout(tab_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        toolBox = new QToolBox(tab_2);
        toolBox->setObjectName(QString::fromUtf8("toolBox"));
        page_3 = new QWidget();
        page_3->setObjectName(QString::fromUtf8("page_3"));
        page_3->setGeometry(QRect(0, 0, 350, 177));
        verticalLayout_2 = new QVBoxLayout(page_3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        camera_list_box = new QComboBox(page_3);
        camera_list_box->setObjectName(QString::fromUtf8("camera_list_box"));
        sizePolicy.setHeightForWidth(camera_list_box->sizePolicy().hasHeightForWidth());
        camera_list_box->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(camera_list_box);

        grab_check_box = new QCheckBox(page_3);
        grab_check_box->setObjectName(QString::fromUtf8("grab_check_box"));
        sizePolicy.setHeightForWidth(grab_check_box->sizePolicy().hasHeightForWidth());
        grab_check_box->setSizePolicy(sizePolicy);

        verticalLayout_2->addWidget(grab_check_box);

        verticalSpacer_4 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_4);

        toolBox->addItem(page_3, QString::fromUtf8("Select Camera"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        page->setGeometry(QRect(0, 0, 350, 177));
        formLayout = new QFormLayout(page);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label_5 = new QLabel(page);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        exposure_program_box = new QComboBox(page);
        exposure_program_box->setObjectName(QString::fromUtf8("exposure_program_box"));
        exposure_program_box->setEnabled(false);

        formLayout->setWidget(0, QFormLayout::FieldRole, exposure_program_box);

        label = new QLabel(page);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        set_iso_box = new QComboBox(page);
        set_iso_box->setObjectName(QString::fromUtf8("set_iso_box"));
        set_iso_box->setEnabled(false);

        formLayout->setWidget(1, QFormLayout::FieldRole, set_iso_box);

        label_3 = new QLabel(page);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        set_aperture_box = new QComboBox(page);
        set_aperture_box->setObjectName(QString::fromUtf8("set_aperture_box"));
        set_aperture_box->setEnabled(false);

        formLayout->setWidget(2, QFormLayout::FieldRole, set_aperture_box);

        label_4 = new QLabel(page);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_4);

        set_exposure_time_box = new QComboBox(page);
        set_exposure_time_box->setObjectName(QString::fromUtf8("set_exposure_time_box"));
        set_exposure_time_box->setEnabled(false);

        formLayout->setWidget(3, QFormLayout::FieldRole, set_exposure_time_box);

        toolBox->addItem(page, QString::fromUtf8("Exposure"));
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        page_2->setGeometry(QRect(0, 0, 359, 162));
        formLayout_2 = new QFormLayout(page_2);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_6 = new QLabel(page_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_6);

        flash_mode_box = new QComboBox(page_2);
        flash_mode_box->setObjectName(QString::fromUtf8("flash_mode_box"));
        flash_mode_box->setEnabled(false);
        flash_mode_box->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        flash_mode_box->setMinimumContentsLength(24);

        formLayout_2->setWidget(0, QFormLayout::FieldRole, flash_mode_box);

        label_8 = new QLabel(page_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_8);

        focus_mode_box = new QComboBox(page_2);
        focus_mode_box->setObjectName(QString::fromUtf8("focus_mode_box"));
        focus_mode_box->setEnabled(false);
        focus_mode_box->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        focus_mode_box->setMinimumContentsLength(24);

        formLayout_2->setWidget(1, QFormLayout::FieldRole, focus_mode_box);

        label_2 = new QLabel(page_2);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_2);

        image_size_box = new QComboBox(page_2);
        image_size_box->setObjectName(QString::fromUtf8("image_size_box"));
        image_size_box->setEnabled(false);
        image_size_box->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        image_size_box->setMinimumContentsLength(24);

        formLayout_2->setWidget(2, QFormLayout::FieldRole, image_size_box);

        label_7 = new QLabel(page_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_7);

        white_balance_box = new QComboBox(page_2);
        white_balance_box->setObjectName(QString::fromUtf8("white_balance_box"));
        white_balance_box->setEnabled(false);
        white_balance_box->setSizeAdjustPolicy(QComboBox::AdjustToMinimumContentsLength);
        white_balance_box->setMinimumContentsLength(24);

        formLayout_2->setWidget(3, QFormLayout::FieldRole, white_balance_box);

        toolBox->addItem(page_2, QString::fromUtf8("Other"));
        page_4 = new QWidget();
        page_4->setObjectName(QString::fromUtf8("page_4"));
        page_4->setGeometry(QRect(0, 0, 350, 177));
        gridLayout = new QGridLayout(page_4);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_9 = new QLabel(page_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        capture_interval = new HMSSpinBox(page_4);
        capture_interval->setObjectName(QString::fromUtf8("capture_interval"));
        capture_interval->setMinimumSize(QSize(170, 0));
        capture_interval->setMinimum(1);
        capture_interval->setMaximum(999999999);

        gridLayout->addWidget(capture_interval, 0, 1, 1, 1);

        label_10 = new QLabel(page_4);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout->addWidget(label_10, 1, 0, 1, 1);

        sequence_duration = new HMSSpinBox(page_4);
        sequence_duration->setObjectName(QString::fromUtf8("sequence_duration"));
        sequence_duration->setMinimumSize(QSize(170, 0));
        sequence_duration->setMinimum(1);
        sequence_duration->setMaximum(999999999);

        gridLayout->addWidget(sequence_duration, 1, 1, 1, 1);

        verticalSpacer = new QSpacerItem(20, 68, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 2, 0, 1, 2);

        toolBox->addItem(page_4, QString::fromUtf8("Sequence/Time Lapse"));

        verticalLayout_5->addWidget(toolBox);

        tabWidget->addTab(tab_2, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QString::fromUtf8("tab_4"));
        verticalLayout_7 = new QVBoxLayout(tab_4);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        images_list = new QListWidget(tab_4);
        images_list->setObjectName(QString::fromUtf8("images_list"));
        images_list->setContextMenuPolicy(Qt::DefaultContextMenu);

        verticalLayout_7->addWidget(images_list);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_2);

        refresh_button = new QPushButton(tab_4);
        refresh_button->setObjectName(QString::fromUtf8("refresh_button"));
        refresh_button->setEnabled(true);

        horizontalLayout_6->addWidget(refresh_button);


        verticalLayout_7->addLayout(horizontalLayout_6);

        tabWidget->addTab(tab_4, QString());

        verticalLayout_3->addWidget(tabWidget);


        horizontalLayout_3->addLayout(verticalLayout_3);

        preview_image = new QGraphicsView(centralwidget);
        preview_image->setObjectName(QString::fromUtf8("preview_image"));
        preview_image->setBackgroundBrush(brush);
        preview_image->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignTop);

        horizontalLayout_3->addWidget(preview_image);


        verticalLayout_4->addLayout(horizontalLayout_3);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        camera_label = new QLabel(centralwidget);
        camera_label->setObjectName(QString::fromUtf8("camera_label"));
        QSizePolicy sizePolicy4(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(camera_label->sizePolicy().hasHeightForWidth());
        camera_label->setSizePolicy(sizePolicy4);

        horizontalLayout_8->addWidget(camera_label);

        battery_display = new QLCDNumber(centralwidget);
        battery_display->setObjectName(QString::fromUtf8("battery_display"));
        QFont font;
        font.setPointSize(8);
        battery_display->setFont(font);
        battery_display->setSmallDecimalPoint(true);
//        battery_display->setNumDigits(3);  // no method
        battery_display->setSegmentStyle(QLCDNumber::Flat);
        battery_display->setProperty("intValue", QVariant(999));

        horizontalLayout_8->addWidget(battery_display);


        verticalLayout_4->addLayout(horizontalLayout_8);

        CamtoolMainWidget->setCentralWidget(centralwidget);
        menuBar = new QMenuBar(CamtoolMainWidget);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1144, 22));
        menuHelp = new QMenu(menuBar);
        menuHelp->setObjectName(QString::fromUtf8("menuHelp"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuTools = new QMenu(menuBar);
        menuTools->setObjectName(QString::fromUtf8("menuTools"));
        CamtoolMainWidget->setMenuBar(menuBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuTools->menuAction());
        menuBar->addAction(menuHelp->menuAction());
        menuHelp->addAction(help_about_action);
        menuHelp->addAction(help_about_camera_action);
        menuFile->addAction(preferences_action);
        menuTools->addAction(tools_preview);
        menuTools->addSeparator();
        menuTools->addAction(tools_debug);

        retranslateUi(CamtoolMainWidget);

        tabWidget->setCurrentIndex(0);
        toolBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(CamtoolMainWidget);
    } // setupUi

    void retranslateUi(QMainWindow *CamtoolMainWidget)
    {
        CamtoolMainWidget->setWindowTitle(QApplication::translate("CamtoolMainWidget", "Icarus Camera Control", 0));
        help_about_action->setText(QApplication::translate("CamtoolMainWidget", "About", 0));
        help_about_camera_action->setText(QApplication::translate("CamtoolMainWidget", "About Camera", 0));
        preferences_action->setText(QApplication::translate("CamtoolMainWidget", "Preferences...", 0));
        tools_preview->setText(QApplication::translate("CamtoolMainWidget", "Preview Window", 0));
        tools_debug->setText(QApplication::translate("CamtoolMainWidget", "(debug)", 0));
#ifndef QT_NO_TOOLTIP
        tools_debug->setToolTip(QApplication::translate("CamtoolMainWidget", "Window for expert debugging of Camtool", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        action_capture_button->setToolTip(QApplication::translate("CamtoolMainWidget", "Capture image to camera storage. This like just\n"
"pressing the button on the camera.", 0));
#endif // QT_NO_TOOLTIP
        action_capture_button->setText(QApplication::translate("CamtoolMainWidget", "Capture", 0));
#ifndef QT_NO_TOOLTIP
        action_tethered_button->setToolTip(QApplication::translate("CamtoolMainWidget", "Capture to the computer. The destination folder and image\n"
"file name are configured in the preferences.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        action_tethered_button->setWhatsThis(QApplication::translate("CamtoolMainWidget", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Lucida Grande'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">A <span style=\" font-weight:600; font-style:italic;\">tethered</span> capture causes the camera to take a picture,</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">then automatically download the image to the tethered</p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">capture directory. (See Preferences....)</p></body></html>", 0));
#endif // QT_NO_WHATSTHIS
        action_tethered_button->setText(QApplication::translate("CamtoolMainWidget", "Tethered", 0));
#ifndef QT_NO_TOOLTIP
        action_timelapse_button->setToolTip(QApplication::translate("CamtoolMainWidget", "Start (stop) a time lapse capture. Set up the interval and duration\n"
"in the Camera Settings tab. The images are captured to the computer\n"
"using the settings for tethered capture.", 0));
#endif // QT_NO_TOOLTIP
        action_timelapse_button->setText(QApplication::translate("CamtoolMainWidget", "Time Lapse", 0));
        zoom_check->setText(QApplication::translate("CamtoolMainWidget", "Zoom 1:1", 0));
        action_file_button->setText(QApplication::translate("CamtoolMainWidget", "View File", 0));
        camera_list_box->clear();
        camera_list_box->insertItems(0, QStringList()
         << QApplication::translate("CamtoolMainWidget", "Scan for camera...", 0)
        );
#ifndef QT_NO_TOOLTIP
        camera_list_box->setToolTip(QApplication::translate("CamtoolMainWidget", "Select the camera to use from this menu.", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        grab_check_box->setToolTip(QApplication::translate("CamtoolMainWidget", "Check this box to grab the camera for use.", 0));
#endif // QT_NO_TOOLTIP
        grab_check_box->setText(QApplication::translate("CamtoolMainWidget", "Grab Selected Camera", 0));
        toolBox->setItemText(toolBox->indexOf(page_3), QApplication::translate("CamtoolMainWidget", "Select Camera", 0));
        label_5->setText(QApplication::translate("CamtoolMainWidget", "Exposure Program Mode", 0));
        label->setText(QApplication::translate("CamtoolMainWidget", "ISO", 0));
        label_3->setText(QApplication::translate("CamtoolMainWidget", "Aperture (f-number)", 0));
        label_4->setText(QApplication::translate("CamtoolMainWidget", "Exposure time", 0));
        toolBox->setItemText(toolBox->indexOf(page), QApplication::translate("CamtoolMainWidget", "Exposure", 0));
        label_6->setText(QApplication::translate("CamtoolMainWidget", "Flash Mode", 0));
        label_8->setText(QApplication::translate("CamtoolMainWidget", "Focus Mode", 0));
        label_2->setText(QApplication::translate("CamtoolMainWidget", "Image Size", 0));
        label_7->setText(QApplication::translate("CamtoolMainWidget", "White Balance", 0));
        toolBox->setItemText(toolBox->indexOf(page_2), QApplication::translate("CamtoolMainWidget", "Other", 0));
        label_9->setText(QApplication::translate("CamtoolMainWidget", "Capture Interval", 0));
        label_10->setText(QApplication::translate("CamtoolMainWidget", "Sequence Duration", 0));
        toolBox->setItemText(toolBox->indexOf(page_4), QApplication::translate("CamtoolMainWidget", "Sequence/Time Lapse", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("CamtoolMainWidget", "Camera Settings", 0));
        refresh_button->setText(QApplication::translate("CamtoolMainWidget", "Refresh", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_4), QApplication::translate("CamtoolMainWidget", "Images", 0));
        camera_label->setText(QApplication::translate("CamtoolMainWidget", "<current camera>", 0));
#ifndef QT_NO_TOOLTIP
        battery_display->setToolTip(QApplication::translate("CamtoolMainWidget", "Battery level (0 to 100%)", 0));
#endif // QT_NO_TOOLTIP
        menuHelp->setTitle(QApplication::translate("CamtoolMainWidget", "Help", 0));
        menuFile->setTitle(QApplication::translate("CamtoolMainWidget", "File", 0));
        menuTools->setTitle(QApplication::translate("CamtoolMainWidget", "Tools", 0));
    } // retranslateUi

};

namespace Ui {
    class CamtoolMainWidget: public Ui_CamtoolMainWidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAMTOOL_H
