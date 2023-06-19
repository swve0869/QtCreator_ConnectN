#ifndef ENDWINDOW_H
#define ENDWINDOW_H

#include <QDialog>

namespace Ui {
class endWindow;
}

class endWindow : public QDialog
{
    Q_OBJECT

public:
    explicit endWindow(QWidget *parent = nullptr);
    ~endWindow();
    void setVals(int win);

private:
    Ui::endWindow *ui;
};

#endif // ENDWINDOW_H
