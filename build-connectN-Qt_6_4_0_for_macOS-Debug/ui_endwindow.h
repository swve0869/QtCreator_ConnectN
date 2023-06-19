/********************************************************************************
** Form generated from reading UI file 'endwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENDWINDOW_H
#define UI_ENDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_endWindow
{
public:
    QLabel *winlabel;
    QLabel *label_2;

    void setupUi(QDialog *endWindow)
    {
        if (endWindow->objectName().isEmpty())
            endWindow->setObjectName("endWindow");
        endWindow->resize(390, 115);
        winlabel = new QLabel(endWindow);
        winlabel->setObjectName("winlabel");
        winlabel->setGeometry(QRect(100, 30, 181, 21));
        label_2 = new QLabel(endWindow);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 70, 121, 31));
        QFont font;
        font.setPointSize(20);
        label_2->setFont(font);

        retranslateUi(endWindow);

        QMetaObject::connectSlotsByName(endWindow);
    } // setupUi

    void retranslateUi(QDialog *endWindow)
    {
        endWindow->setWindowTitle(QCoreApplication::translate("endWindow", "Dialog", nullptr));
        winlabel->setText(QCoreApplication::translate("endWindow", "Player 1 has won 3 rounds !", nullptr));
        label_2->setText(QCoreApplication::translate("endWindow", "GAME OVER", nullptr));
    } // retranslateUi

};

namespace Ui {
    class endWindow: public Ui_endWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENDWINDOW_H
