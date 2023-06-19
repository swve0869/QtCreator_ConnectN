#include "leadwindow.h"
#include "ui_leadwindow.h"

leadWindow::leadWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::leadWindow)
{
    ui->setupUi(this);
}

leadWindow::~leadWindow()
{
    delete ui;
}

void leadWindow::setVals(int p1s, int p2s){

    std::string s = "P1:  " + std::to_string(p1s);
    QString qs1(s.c_str());
    ui->p1label->setText(qs1);
    ui->p1label->setStyleSheet("QLabel {color : red; }");

    s = "P2:  " + std::to_string(p2s);
    QString qs2(s.c_str());
    ui->p2label->setText
            (qs2);
    ui->p2label->setStyleSheet("QLabel {color : yellow; }");
}
