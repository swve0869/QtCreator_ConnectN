/********************************************************************************
** Form generated from reading UI file 'windialog.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDIALOG_H
#define UI_WINDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_winDialog
{
public:
    QLabel *winlabel;
    QPushButton *pushButton;
    QGroupBox *groupBox;
    QLabel *p1scorelabel;
    QLabel *p2scorelabel;
    QLabel *label;

    void setupUi(QDialog *winDialog)
    {
        if (winDialog->objectName().isEmpty())
            winDialog->setObjectName("winDialog");
        winDialog->resize(311, 144);
        winlabel = new QLabel(winDialog);
        winlabel->setObjectName("winlabel");
        winlabel->setGeometry(QRect(90, 10, 151, 16));
        pushButton = new QPushButton(winDialog);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(80, 100, 151, 32));
        groupBox = new QGroupBox(winDialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(80, 40, 151, 51));
        p1scorelabel = new QLabel(groupBox);
        p1scorelabel->setObjectName("p1scorelabel");
        p1scorelabel->setGeometry(QRect(20, 25, 41, 21));
        p2scorelabel = new QLabel(groupBox);
        p2scorelabel->setObjectName("p2scorelabel");
        p2scorelabel->setGeometry(QRect(90, 25, 41, 21));
        label = new QLabel(groupBox);
        label->setObjectName("label");
        label->setGeometry(QRect(32, 7, 91, 16));

        retranslateUi(winDialog);

        QMetaObject::connectSlotsByName(winDialog);
    } // setupUi

    void retranslateUi(QDialog *winDialog)
    {
        winDialog->setWindowTitle(QCoreApplication::translate("winDialog", "Dialog", nullptr));
        winlabel->setText(QString());
        pushButton->setText(QCoreApplication::translate("winDialog", "Start Next Round", nullptr));
        groupBox->setTitle(QString());
        p1scorelabel->setText(QCoreApplication::translate("winDialog", "P1: 3", nullptr));
        p2scorelabel->setText(QCoreApplication::translate("winDialog", "P1: 4", nullptr));
        label->setText(QCoreApplication::translate("winDialog", "Current Score", nullptr));
    } // retranslateUi

};

namespace Ui {
    class winDialog: public Ui_winDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDIALOG_H
