/********************************************************************************
** Form generated from reading UI file 'leaderboard.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADERBOARD_H
#define UI_LEADERBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *p1label;
    QLabel *p2label;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName("Dialog");
        Dialog->resize(238, 138);
        label = new QLabel(Dialog);
        label->setObjectName("label");
        label->setGeometry(QRect(70, 20, 91, 16));
        groupBox = new QGroupBox(Dialog);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(19, 49, 201, 71));
        p1label = new QLabel(groupBox);
        p1label->setObjectName("p1label");
        p1label->setGeometry(QRect(30, 30, 58, 16));
        QFont font;
        font.setPointSize(20);
        p1label->setFont(font);
        p2label = new QLabel(groupBox);
        p2label->setObjectName("p2label");
        p2label->setGeometry(QRect(120, 30, 58, 16));
        p2label->setFont(font);

        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Current Score", nullptr));
        groupBox->setTitle(QString());
        p1label->setText(QCoreApplication::translate("Dialog", " P1: 1", nullptr));
        p2label->setText(QCoreApplication::translate("Dialog", "P2: !", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADERBOARD_H
