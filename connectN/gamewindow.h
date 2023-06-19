#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QMainWindow>
#include <QGraphicsScene>
#include <QGraphicsView>
#include "subwindow.h"
#include "tile.h"

struct Player{
    int pid_;
    int score_;
    bool usedCol_;
    bool usedRow_;
    bool usedConvert_;

    Player(int p){
        pid_ = p;
        score_ = 0;
        usedRow_ = false;
        usedCol_ = false;
        usedConvert_ = false;
    }
};


QT_BEGIN_NAMESPACE
namespace Ui { class gameWindow; }
QT_END_NAMESPACE

class gameWindow : public QMainWindow
{
    Q_OBJECT

public:
    gameWindow(QWidget *parent = nullptr);
    ~gameWindow();
    void clearBoard();
    void clearRow(int row);
    void clearCol(int col);
    void visualize(int row, int col,int state);
    void switchTurn();
    bool checkForWin();
    bool checkForDraw();
    void checkForWin2(int row,int col);
    int findLowestRow(int col);
    inline void delay(int millisecondsWait);

private slots:
    void startGameSlot(int n);
    void newRound();
    void tileSelectedSlot(Tile* t);
    void updateSecondsSlot();

    void on_clearRowButton_clicked();
    void on_clearColButton_clicked();
    void on_convertDiskButton_clicked();


    void on_leaderBoardButton_clicked();

    void on_pushButton_clicked();

private:
    Ui::gameWindow *ui;
    QGraphicsScene *scene;
    subWindow * sub;

    int n_;
    int rows_;
    int cols_;
    int turn_;
    int seconds_;

    bool clearRowSelected;
    bool clearColSelected;
    bool convertDiskSelected;
    bool freeze;

    std::vector<std::vector <Tile*>> board_;

    Player * p1;
    Player * p2;
    Player * currentPlayer;

    QTimer * secTimer;

};

#endif // GAMEWINDOW_H
