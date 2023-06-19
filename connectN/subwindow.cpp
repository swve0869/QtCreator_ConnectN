#include "subwindow.h"
#include "ui_subwindow.h"

subWindow::subWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::subWindow)
{
    ui->setupUi(this);
    ui ->slider->setMinimum(4);
    ui ->slider->setMaximum(10);

    n = 4;
}

subWindow::~subWindow()
{
    delete ui;
}

void subWindow::on_slider_sliderMoved(int position)
{
    std::string s = "You're playing Connect " + std::to_string(position);
    QString qs(s.c_str());
    ui->connectN->setText(qs);
    n = position;
    this -> update();
}

void subWindow::on_startsub_clicked()
{
    emit startGame(n);
    qDebug() << "emitting " << n ;
    this -> close();
}

