/********************************************************************************
** Form generated from reading UI file 'subwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SUBWINDOW_H
#define UI_SUBWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_subWindow
{
public:
    QSlider *slider;
    QPushButton *startsub;
    QLabel *label;
    QLabel *connectN;

    void setupUi(QDialog *subWindow)
    {
        if (subWindow->objectName().isEmpty())
            subWindow->setObjectName("subWindow");
        subWindow->resize(359, 284);
        slider = new QSlider(subWindow);
        slider->setObjectName("slider");
        slider->setGeometry(QRect(100, 90, 160, 25));
        slider->setOrientation(Qt::Horizontal);
        startsub = new QPushButton(subWindow);
        startsub->setObjectName("startsub");
        startsub->setGeometry(QRect(130, 220, 100, 32));
        label = new QLabel(subWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 281, 21));
        connectN = new QLabel(subWindow);
        connectN->setObjectName("connectN");
        connectN->setGeometry(QRect(100, 160, 161, 20));

        retranslateUi(subWindow);

        QMetaObject::connectSlotsByName(subWindow);
    } // setupUi

    void retranslateUi(QDialog *subWindow)
    {
        subWindow->setWindowTitle(QCoreApplication::translate("subWindow", "Dialog", nullptr));
        startsub->setText(QCoreApplication::translate("subWindow", "Start", nullptr));
        label->setText(QCoreApplication::translate("subWindow", "How many in a row would you like to connect?", nullptr));
        connectN->setText(QCoreApplication::translate("subWindow", "You're playing Connect 4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class subWindow: public Ui_subWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SUBWINDOW_H
