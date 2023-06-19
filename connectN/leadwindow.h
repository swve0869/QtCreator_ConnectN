#ifndef LEADWINDOW_H
#define LEADWINDOW_H

#include <QDialog>

namespace Ui {
class leadWindow;
}

class leadWindow : public QDialog
{
    Q_OBJECT

public:
    explicit leadWindow(QWidget *parent = nullptr);
    void setVals(int p1s, int p2s);
    ~leadWindow();

private:
    Ui::leadWindow *ui;

};

#endif // LEADWINDOW_H
