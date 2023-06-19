/********************************************************************************
** Form generated from reading UI file 'gamewindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAMEWINDOW_H
#define UI_GAMEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_gameWindow
{
public:
    QWidget *centralwidget;
    QGraphicsView *graphicsView;
    QPushButton *leaderBoardButton;
    QPushButton *clearRowButton;
    QPushButton *clearColButton;
    QPushButton *convertDiskButton;
    QGroupBox *turnBox;
    QLabel *turnDisplay;
    QLabel *label;
    QLabel *secondslabel;
    QPushButton *pushButton;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *gameWindow)
    {
        if (gameWindow->objectName().isEmpty())
            gameWindow->setObjectName("gameWindow");
        gameWindow->resize(800, 650);
        centralwidget = new QWidget(gameWindow);
        centralwidget->setObjectName("centralwidget");
        graphicsView = new QGraphicsView(centralwidget);
        graphicsView->setObjectName("graphicsView");
        graphicsView->setGeometry(QRect(10, 10, 650, 569));
        leaderBoardButton = new QPushButton(centralwidget);
        leaderBoardButton->setObjectName("leaderBoardButton");
        leaderBoardButton->setGeometry(QRect(670, 90, 100, 32));
        clearRowButton = new QPushButton(centralwidget);
        clearRowButton->setObjectName("clearRowButton");
        clearRowButton->setGeometry(QRect(670, 300, 100, 32));
        clearColButton = new QPushButton(centralwidget);
        clearColButton->setObjectName("clearColButton");
        clearColButton->setGeometry(QRect(670, 330, 100, 32));
        convertDiskButton = new QPushButton(centralwidget);
        convertDiskButton->setObjectName("convertDiskButton");
        convertDiskButton->setGeometry(QRect(670, 360, 101, 32));
        turnBox = new QGroupBox(centralwidget);
        turnBox->setObjectName("turnBox");
        turnBox->setGeometry(QRect(670, 130, 100, 111));
        turnDisplay = new QLabel(turnBox);
        turnDisplay->setObjectName("turnDisplay");
        turnDisplay->setGeometry(QRect(10, 10, 81, 31));
        QFont font;
        font.setPointSize(11);
        turnDisplay->setFont(font);
        label = new QLabel(turnBox);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 70, 71, 31));
        QFont font1;
        font1.setPointSize(10);
        label->setFont(font1);
        secondslabel = new QLabel(turnBox);
        secondslabel->setObjectName("secondslabel");
        secondslabel->setGeometry(QRect(45, 40, 16, 31));
        QFont font2;
        font2.setPointSize(20);
        secondslabel->setFont(font2);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(670, 60, 100, 32));
        gameWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(gameWindow);
        statusbar->setObjectName("statusbar");
        gameWindow->setStatusBar(statusbar);

        retranslateUi(gameWindow);

        QMetaObject::connectSlotsByName(gameWindow);
    } // setupUi

    void retranslateUi(QMainWindow *gameWindow)
    {
        gameWindow->setWindowTitle(QCoreApplication::translate("gameWindow", "gameWindow", nullptr));
        leaderBoardButton->setText(QCoreApplication::translate("gameWindow", "Leader Board", nullptr));
        clearRowButton->setText(QCoreApplication::translate("gameWindow", "Clear Row", nullptr));
        clearColButton->setText(QCoreApplication::translate("gameWindow", "Clear Column", nullptr));
        convertDiskButton->setText(QCoreApplication::translate("gameWindow", "Convert Disk", nullptr));
        turnBox->setTitle(QString());
        turnDisplay->setText(QString());
        label->setText(QCoreApplication::translate("gameWindow", "   seconds left", nullptr));
        secondslabel->setText(QCoreApplication::translate("gameWindow", "7", nullptr));
        pushButton->setText(QCoreApplication::translate("gameWindow", "End Round", nullptr));
    } // retranslateUi

};

namespace Ui {
    class gameWindow: public Ui_gameWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAMEWINDOW_H
