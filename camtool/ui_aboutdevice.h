/********************************************************************************
** Form generated from reading UI file 'aboutdevice.ui'
**
** Created: Mon Jul 15 10:59:32 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUTDEVICE_H
#define UI_ABOUTDEVICE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AboutDeviceDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QTreeWidget *about_device_tree;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AboutDeviceDialog)
    {
        if (AboutDeviceDialog->objectName().isEmpty())
            AboutDeviceDialog->setObjectName(QString::fromUtf8("AboutDeviceDialog"));
        AboutDeviceDialog->resize(400, 300);
        verticalLayout = new QVBoxLayout(AboutDeviceDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(AboutDeviceDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        about_device_tree = new QTreeWidget(AboutDeviceDialog);
        about_device_tree->setObjectName(QString::fromUtf8("about_device_tree"));
        about_device_tree->setIndentation(8);
        about_device_tree->setRootIsDecorated(true);
        about_device_tree->setColumnCount(2);

        verticalLayout->addWidget(about_device_tree);

        buttonBox = new QDialogButtonBox(AboutDeviceDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close|QDialogButtonBox::Save);

        verticalLayout->addWidget(buttonBox);

        label->raise();
        buttonBox->raise();
        about_device_tree->raise();

        retranslateUi(AboutDeviceDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AboutDeviceDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AboutDeviceDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AboutDeviceDialog);
    } // setupUi

    void retranslateUi(QDialog *AboutDeviceDialog)
    {
        AboutDeviceDialog->setWindowTitle(QApplication::translate("AboutDeviceDialog", "Camera Details", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("AboutDeviceDialog", "Detailed description of selected camera", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = about_device_tree->headerItem();
        ___qtreewidgetitem->setText(1, QApplication::translate("AboutDeviceDialog", "Value", 0, QApplication::UnicodeUTF8));
        ___qtreewidgetitem->setText(0, QApplication::translate("AboutDeviceDialog", "Key", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class AboutDeviceDialog: public Ui_AboutDeviceDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUTDEVICE_H
