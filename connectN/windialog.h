#ifndef WINDIALOG_H
#define WINDIALOG_H

#include <QDialog>

namespace Ui {
class winDialog;
}

class winDialog : public QDialog
{
    Q_OBJECT

public:
    explicit winDialog(QWidget *parent = nullptr);
    void setVals(int win, int p1s,int p2s, int n);

    ~winDialog();

signals:
    void newRound();

private slots:
    void on_pushButton_clicked();

private:
    int winner_;
    int p1Score_;
    int p2Score_;
    int n_;

    Ui::winDialog *ui;
};

#endif // WINDIALOG_H
