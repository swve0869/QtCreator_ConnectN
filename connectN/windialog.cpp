#include "windialog.h"
#include "ui_windialog.h"

winDialog::winDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::winDialog)
{
    ui->setupUi(this);
    winner_ = 0;
    p1Score_ = 0;
    p2Score_ = 0;

}

winDialog::~winDialog()
{
    delete ui;
}

void winDialog::setVals(int win, int p1s,int p2s,int n){
    winner_ = win;
    p1Score_= p1s;
    p2Score_ = p2s;
    n_ = n;

    std::string strWin;

    if(winner_ == 1){
        strWin = "1";
        ui->winlabel->setStyleSheet("QLabel {color : red; }");
    }else{
        strWin = "2";
        ui->winlabel->setStyleSheet("QLabel {color : yellow; }");
    }

    std::string s = "Player " + strWin + " won the round";
    QString qs(s.c_str());
    ui->winlabel->setText(qs);

    s = "P1:  " + std::to_string(p1s);
    QString qs1(s.c_str());
    ui->p1scorelabel->setText(qs1);
    ui->p1scorelabel->setStyleSheet("QLabel {color : red; }");

    s = "P2:  " + std::to_string(p2s);
    QString qs2(s.c_str());
    ui->p2scorelabel->setText(qs2);
    ui->p2scorelabel->setStyleSheet("QLabel {color : yellow; }");

}

void winDialog::on_pushButton_clicked()
{
    emit newRound();
    this->close();
}

