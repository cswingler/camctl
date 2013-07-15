/********************************************************************************
** Form generated from reading UI file 'debug.ui'
**
** Created: Mon Jul 15 10:59:54 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DEBUG_H
#define UI_DEBUG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DebugWindow
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_2;
    QFrame *frame_5;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *debug_ptp_refresh_button;
    QSpacerItem *horizontalSpacer_5;
    QComboBox *debug_ptp_select_property;
    QFrame *frame_3;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *debug_ptp_describe_button;
    QPushButton *debug_ptp_get_button;
    QPushButton *debug_ptp_set_button;
    QSpacerItem *horizontalSpacer_3;
    QFrame *frame_2;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *debug_ptp_setable;
    QComboBox *debug_ptp_type_box;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *debug_ptp_select_value;
    QLineEdit *debug_ptp_value_entry;
    QFrame *frame_4;
    QHBoxLayout *horizontalLayout_4;
    QLineEdit *debug_ptp_rc_entry;
    QSpacerItem *horizontalSpacer_4;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_2;
    QLineEdit *dump_generic_entry;
    QPushButton *dump_generic_button;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DebugWindow)
    {
        if (DebugWindow->objectName().isEmpty())
            DebugWindow->setObjectName(QString::fromUtf8("DebugWindow"));
        DebugWindow->resize(357, 443);
        verticalLayout = new QVBoxLayout(DebugWindow);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(DebugWindow);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_2 = new QVBoxLayout(tab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        frame_5 = new QFrame(tab);
        frame_5->setObjectName(QString::fromUtf8("frame_5"));
        frame_5->setFrameShape(QFrame::NoFrame);
        frame_5->setFrameShadow(QFrame::Raised);
        horizontalLayout_5 = new QHBoxLayout(frame_5);
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        debug_ptp_refresh_button = new QPushButton(frame_5);
        debug_ptp_refresh_button->setObjectName(QString::fromUtf8("debug_ptp_refresh_button"));

        horizontalLayout_5->addWidget(debug_ptp_refresh_button);

        horizontalSpacer_5 = new QSpacerItem(187, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_5);


        verticalLayout_2->addWidget(frame_5);

        debug_ptp_select_property = new QComboBox(tab);
        debug_ptp_select_property->setObjectName(QString::fromUtf8("debug_ptp_select_property"));

        verticalLayout_2->addWidget(debug_ptp_select_property);

        frame_3 = new QFrame(tab);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        horizontalLayout_3 = new QHBoxLayout(frame_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, -1, 0);
        debug_ptp_describe_button = new QPushButton(frame_3);
        debug_ptp_describe_button->setObjectName(QString::fromUtf8("debug_ptp_describe_button"));

        horizontalLayout_3->addWidget(debug_ptp_describe_button);

        debug_ptp_get_button = new QPushButton(frame_3);
        debug_ptp_get_button->setObjectName(QString::fromUtf8("debug_ptp_get_button"));

        horizontalLayout_3->addWidget(debug_ptp_get_button);

        debug_ptp_set_button = new QPushButton(frame_3);
        debug_ptp_set_button->setObjectName(QString::fromUtf8("debug_ptp_set_button"));

        horizontalLayout_3->addWidget(debug_ptp_set_button);

        horizontalSpacer_3 = new QSpacerItem(42, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);


        verticalLayout_2->addWidget(frame_3);

        frame_2 = new QFrame(tab);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::NoFrame);
        frame_2->setFrameShadow(QFrame::Raised);
        horizontalLayout_2 = new QHBoxLayout(frame_2);
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        debug_ptp_setable = new QCheckBox(frame_2);
        debug_ptp_setable->setObjectName(QString::fromUtf8("debug_ptp_setable"));
        debug_ptp_setable->setEnabled(false);
        debug_ptp_setable->setCheckable(true);

        horizontalLayout_2->addWidget(debug_ptp_setable);

        debug_ptp_type_box = new QComboBox(frame_2);
        debug_ptp_type_box->setObjectName(QString::fromUtf8("debug_ptp_type_box"));
        debug_ptp_type_box->setEnabled(false);

        horizontalLayout_2->addWidget(debug_ptp_type_box);

        horizontalSpacer_2 = new QSpacerItem(99, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addWidget(frame_2);

        debug_ptp_select_value = new QComboBox(tab);
        debug_ptp_select_value->setObjectName(QString::fromUtf8("debug_ptp_select_value"));

        verticalLayout_2->addWidget(debug_ptp_select_value);

        debug_ptp_value_entry = new QLineEdit(tab);
        debug_ptp_value_entry->setObjectName(QString::fromUtf8("debug_ptp_value_entry"));

        verticalLayout_2->addWidget(debug_ptp_value_entry);

        frame_4 = new QFrame(tab);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::NoFrame);
        frame_4->setFrameShadow(QFrame::Raised);
        horizontalLayout_4 = new QHBoxLayout(frame_4);
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        debug_ptp_rc_entry = new QLineEdit(frame_4);
        debug_ptp_rc_entry->setObjectName(QString::fromUtf8("debug_ptp_rc_entry"));
        debug_ptp_rc_entry->setReadOnly(true);

        horizontalLayout_4->addWidget(debug_ptp_rc_entry);

        horizontalSpacer_4 = new QSpacerItem(130, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_4);


        verticalLayout_2->addWidget(frame_4);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_3 = new QVBoxLayout(tab_2);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_2 = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_2);

        dump_generic_entry = new QLineEdit(tab_2);
        dump_generic_entry->setObjectName(QString::fromUtf8("dump_generic_entry"));

        verticalLayout_3->addWidget(dump_generic_entry);

        dump_generic_button = new QPushButton(tab_2);
        dump_generic_button->setObjectName(QString::fromUtf8("dump_generic_button"));

        verticalLayout_3->addWidget(dump_generic_button);

        verticalSpacer = new QSpacerItem(20, 82, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(DebugWindow);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DebugWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), DebugWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DebugWindow, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(DebugWindow);
    } // setupUi

    void retranslateUi(QDialog *DebugWindow)
    {
        DebugWindow->setWindowTitle(QApplication::translate("DebugWindow", "Dialog", 0, QApplication::UnicodeUTF8));
        debug_ptp_refresh_button->setText(QApplication::translate("DebugWindow", "Refresh", 0, QApplication::UnicodeUTF8));
        debug_ptp_select_property->clear();
        debug_ptp_select_property->insertItems(0, QStringList()
         << QApplication::translate("DebugWindow", "<select a property>", 0, QApplication::UnicodeUTF8)
        );
        debug_ptp_describe_button->setText(QApplication::translate("DebugWindow", "describe", 0, QApplication::UnicodeUTF8));
        debug_ptp_get_button->setText(QApplication::translate("DebugWindow", "get", 0, QApplication::UnicodeUTF8));
        debug_ptp_set_button->setText(QApplication::translate("DebugWindow", "set", 0, QApplication::UnicodeUTF8));
        debug_ptp_setable->setText(QApplication::translate("DebugWindow", "Setable", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        debug_ptp_type_box->setToolTip(QApplication::translate("DebugWindow", "Type of property to get/set.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        debug_ptp_rc_entry->setToolTip(QApplication::translate("DebugWindow", "Return code from get/set.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("DebugWindow", "PTP", 0, QApplication::UnicodeUTF8));
        dump_generic_button->setText(QApplication::translate("DebugWindow", "...generic...", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("DebugWindow", "Dumps", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DebugWindow: public Ui_DebugWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DEBUG_H
