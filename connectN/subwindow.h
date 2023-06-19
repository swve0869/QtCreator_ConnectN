#ifndef SUBWINDOW_H
#define SUBWINDOW_H

#include <QDialog>

namespace Ui {
class subWindow;
}

class subWindow : public QDialog
{
    Q_OBJECT

public:
    explicit subWindow(QWidget *parent = nullptr);
    ~subWindow();

signals:
    void startGame(int n);

private slots:

    void on_slider_sliderMoved(int position);

    void on_startsub_clicked();

private:
    Ui::subWindow *ui;
    int n;
};

#endif // SUBWINDOW_H
