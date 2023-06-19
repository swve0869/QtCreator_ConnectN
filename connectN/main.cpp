#include "gamewindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    gameWindow w;
    w.show();
    //w.resize(800,600);
    return a.exec();
}
