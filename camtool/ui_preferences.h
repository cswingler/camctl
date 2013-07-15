/********************************************************************************
** Form generated from reading UI file 'preferences.ui'
**
** Created: Mon Jul 15 10:58:49 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PREFERENCES_H
#define UI_PREFERENCES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PreferencesDialog
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *verticalSpacer_4;
    QHBoxLayout *horizontalLayout_2;
    QLineEdit *tethered_path;
    QPushButton *select_tethered_button;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *tethered_name;
    QLabel *label_2;
    QSpinBox *tethered_number;
    QSpacerItem *verticalSpacer_3;
    QDialogButtonBox *image_output_buttons;
    QWidget *tab_2;
    QVBoxLayout *verticalLayout_2;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout;
    QLineEdit *logfile_path;
    QPushButton *select_logfile_button;
    QSpacerItem *verticalSpacer_2;
    QDialogButtonBox *debug_buttons;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PreferencesDialog)
    {
        if (PreferencesDialog->objectName().isEmpty())
            PreferencesDialog->setObjectName(QString::fromUtf8("PreferencesDialog"));
        PreferencesDialog->resize(400, 357);
        verticalLayout = new QVBoxLayout(PreferencesDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(PreferencesDialog);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout_3 = new QVBoxLayout(tab);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_4);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        tethered_path = new QLineEdit(tab);
        tethered_path->setObjectName(QString::fromUtf8("tethered_path"));

        horizontalLayout_2->addWidget(tethered_path);

        select_tethered_button = new QPushButton(tab);
        select_tethered_button->setObjectName(QString::fromUtf8("select_tethered_button"));

        horizontalLayout_2->addWidget(select_tethered_button);


        verticalLayout_3->addLayout(horizontalLayout_2);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(tab);
        label->setObjectName(QString::fromUtf8("label"));
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        tethered_name = new QLineEdit(tab);
        tethered_name->setObjectName(QString::fromUtf8("tethered_name"));

        gridLayout->addWidget(tethered_name, 0, 1, 1, 1);

        label_2 = new QLabel(tab);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        tethered_number = new QSpinBox(tab);
        tethered_number->setObjectName(QString::fromUtf8("tethered_number"));
        tethered_number->setMaximum(99999999);

        gridLayout->addWidget(tethered_number, 1, 1, 1, 1);


        verticalLayout_3->addLayout(gridLayout);

        verticalSpacer_3 = new QSpacerItem(20, 44, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(verticalSpacer_3);

        image_output_buttons = new QDialogButtonBox(tab);
        image_output_buttons->setObjectName(QString::fromUtf8("image_output_buttons"));
        image_output_buttons->setStandardButtons(QDialogButtonBox::RestoreDefaults);

        verticalLayout_3->addWidget(image_output_buttons);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        verticalLayout_2 = new QVBoxLayout(tab_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalSpacer = new QSpacerItem(20, 53, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        logfile_path = new QLineEdit(tab_2);
        logfile_path->setObjectName(QString::fromUtf8("logfile_path"));
        logfile_path->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(logfile_path);

        select_logfile_button = new QPushButton(tab_2);
        select_logfile_button->setObjectName(QString::fromUtf8("select_logfile_button"));

        horizontalLayout->addWidget(select_logfile_button);


        verticalLayout_2->addLayout(horizontalLayout);

        verticalSpacer_2 = new QSpacerItem(20, 52, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_2);

        debug_buttons = new QDialogButtonBox(tab_2);
        debug_buttons->setObjectName(QString::fromUtf8("debug_buttons"));
        debug_buttons->setStandardButtons(QDialogButtonBox::Reset);

        verticalLayout_2->addWidget(debug_buttons);

        tabWidget->addTab(tab_2, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(PreferencesDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(PreferencesDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), PreferencesDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), PreferencesDialog, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(PreferencesDialog);
    } // setupUi

    void retranslateUi(QDialog *PreferencesDialog)
    {
        PreferencesDialog->setWindowTitle(QApplication::translate("PreferencesDialog", "Preferences", 0));
#ifndef QT_NO_TOOLTIP
        tethered_path->setToolTip(QApplication::translate("PreferencesDialog", "Directory for tethered capture images", 0));
#endif // QT_NO_TOOLTIP
        select_tethered_button->setText(QApplication::translate("PreferencesDialog", "Browse", 0));
        label->setText(QApplication::translate("PreferencesDialog", "File name", 0));
#ifndef QT_NO_TOOLTIP
        tethered_name->setToolTip(QApplication::translate("PreferencesDialog", "Enter the file name/format to use\n"
"for the next tethered image capture.", 0));
#endif // QT_NO_TOOLTIP
        tethered_name->setText(QApplication::translate("PreferencesDialog", "image%N", 0));
        label_2->setText(QApplication::translate("PreferencesDialog", "File number", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("PreferencesDialog", "Image output", 0));
#ifndef QT_NO_TOOLTIP
        logfile_path->setToolTip(QApplication::translate("PreferencesDialog", "Enter the path to a file to use for logging.", 0));
#endif // QT_NO_TOOLTIP
        select_logfile_button->setText(QApplication::translate("PreferencesDialog", "Browse", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("PreferencesDialog", "(debug)", 0));
    } // retranslateUi

};

namespace Ui {
    class PreferencesDialog: public Ui_PreferencesDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PREFERENCES_H
