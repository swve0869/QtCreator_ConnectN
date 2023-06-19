/********************************************************************************
** Form generated from reading UI file 'leadwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LEADWINDOW_H
#define UI_LEADWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_leadWindow
{
public:
    QLabel *label;
    QGroupBox *groupBox;
    QLabel *p1label;
    QLabel *p2label;

    void setupUi(QDialog *leadWindow)
    {
        if (leadWindow->objectName().isEmpty())
            leadWindow->setObjectName("leadWindow");
        leadWindow->resize(258, 179);
        label = new QLabel(leadWindow);
        label->setObjectName("label");
        label->setGeometry(QRect(90, 20, 91, 16));
        groupBox = new QGroupBox(leadWindow);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(20, 50, 221, 101));
        p1label = new QLabel(groupBox);
        p1label->setObjectName("p1label");
        p1label->setGeometry(QRect(20, 30, 81, 41));
        QFont font;
        font.setPointSize(30);
        p1label->setFont(font);
        p2label = new QLabel(groupBox);
        p2label->setObjectName("p2label");
        p2label->setGeometry(QRect(130, 30, 81, 41));
        p2label->setFont(font);

        retranslateUi(leadWindow);

        QMetaObject::connectSlotsByName(leadWindow);
    } // setupUi

    void retranslateUi(QDialog *leadWindow)
    {
        leadWindow->setWindowTitle(QCoreApplication::translate("leadWindow", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("leadWindow", "Current Score", nullptr));
        groupBox->setTitle(QString());
        p1label->setText(QCoreApplication::translate("leadWindow", "P1 : 1", nullptr));
        p2label->setText(QCoreApplication::translate("leadWindow", "P2: 1", nullptr));
    } // retranslateUi

};

namespace Ui {
    class leadWindow: public Ui_leadWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LEADWINDOW_H
