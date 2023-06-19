#include "endwindow.h"
#include "ui_endwindow.h"

endWindow::endWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::endWindow)
{
    ui->setupUi(this);
}

endWindow::~endWindow()
{
    delete ui;
}

void endWindow::setVals(int win){

    std::string s = "Player " + std::to_string(win) + " has won three rounds!";
    QString qs1(s.c_str());
    ui->winlabel->setText(qs1);
    if(win == 1){
        ui->winlabel->setStyleSheet("QLabel {color : red; }"); }
    else{
        ui->winlabel->setStyleSheet("QLabel {color : yellow; }");
    }


}
