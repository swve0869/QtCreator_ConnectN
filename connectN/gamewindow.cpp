#include "gamewindow.h"
#include "windialog.h"
#include "leadwindow.h"
#include "endwindow.h"
#include "ui_gamewindow.h"

#include <QGraphicsScene>
#include <QGraphicsView>
#include <QDebug>
#include <QTimer>

gameWindow::gameWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::gameWindow)
{
    ui->setupUi(this);

    QGraphicsView * view = ui->graphicsView;
    scene = new QGraphicsScene;
    view->setScene(scene);
    view->setSceneRect(0,0,view->frameSize().width(),view->frameSize().height());
    view->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    view->setBackgroundBrush(QBrush(Qt::blue, Qt::SolidPattern));
    sub = nullptr;

    rows_ = 6;
    cols_ = 7;
    turn_ = 1;
    seconds_ = 7;

    clearRowSelected    = false;
    clearColSelected    = false;
    convertDiskSelected = false;
    freeze = false;

    p1 = new Player(1);
    p2 = new Player(2);
    currentPlayer = p1;

    std::string s = "Player 1's Turn";
    QString qs(s.c_str());
    ui->turnDisplay->setText(qs);

    subWindow * start =  new subWindow;
    connect(start,&subWindow::startGame,this,&gameWindow::startGameSlot);
    start->setModal(true);
    start->exec();

}

gameWindow::~gameWindow()
{
    delete ui;
}


// SLOTS

void gameWindow::startGameSlot(int n)
{
    n_ = n;
    rows_ = n + 2;
    cols_ = n + 3;
    int gap = ui->graphicsView->frameSize().width() / ((cols_ +1) + (8*cols_));
    int x = gap; int y = gap;
    int width = 8*gap;

    for(long r = 0; r < rows_; r++){
        std::vector <Tile*> tmp;
        for(long c = 0; c <cols_; c++){
            Tile * newT = new Tile(x,y,width,r,c,0);
            connect(newT,&Tile::TileSelected,this,&gameWindow::tileSelectedSlot);
            tmp.push_back(newT);
            qDebug() << "HERE";

            scene -> addItem(newT);
            x += width + gap;
        }
        y += width + gap;
        x = gap;
        board_.push_back(tmp);
    }

    secTimer = new QTimer(this);
    connect(secTimer, &QTimer::timeout, this, &gameWindow::updateSecondsSlot);
    secTimer->start(1000);

    ui->turnDisplay->setStyleSheet("QLabel {color : red; }");

}


void gameWindow::tileSelectedSlot(Tile * t){

    qDebug() << t -> get_row() << "  " << t -> get_col();

    bool modifier = false;

    if(!freeze){

        int r = t->get_row();
        int c = t->get_col();

        if(convertDiskSelected){
            if(board_[r][c] -> get_state() == 0){
                return;
            }
            if(board_[r][c] -> get_state() == 1){
                board_[r][c] -> set_state(2);
            }else{
                board_[r][c] -> set_state(1);
            }
            // reset and switch turn
            convertDiskSelected = false;
            ui -> centralwidget -> setCursor(Qt::ArrowCursor);
            currentPlayer ->usedConvert_ = true;
            modifier = true;
        }

        if(clearRowSelected){
            clearRow(r);
            // reset and switch turn
            clearRowSelected = false;
            ui -> centralwidget -> setCursor(Qt::ArrowCursor);
            currentPlayer ->usedRow_ = true;
            modifier = true;
        }

        if(clearColSelected){
            clearCol(c);
            // reset and switch turn
            clearColSelected = false;
            ui -> centralwidget -> setCursor(Qt::ArrowCursor);
            currentPlayer ->usedCol_ = true;
            modifier = true;
        }

        //NO modifiers place tile //
        r = findLowestRow(c);
        if(r != -1 && !modifier){                            // if the column isn't full
            visualize(r,c,turn_);
            board_[r][c] -> set_state(turn_);   // add tile
        }

        if(checkForWin()){
            return;
        }

        if(checkForDraw()){
            clearBoard();
            return;
        }

        switchTurn();
    }
}

void gameWindow::newRound(){

    secTimer -> stop();

    if(p1 ->score_ == 3){
        endWindow * win = new endWindow();
        win -> setVals(1);
        win->setModal(true);
        win->exec();
        QApplication::quit();
    } else if(p2 ->score_ == 3){
        endWindow * win = new endWindow();
        win -> setVals(2);
        win->setModal(true);
        win->exec();
        QApplication::quit();
    }


    clearBoard();

    secTimer = new QTimer(this);
    connect(secTimer, &QTimer::timeout, this, &gameWindow::updateSecondsSlot);
    secTimer->start(1000);

    seconds_ = 8;
    turn_ = 1;
    currentPlayer = p1;
    std::string s = "Player 1's Turn";
    QString qs(s.c_str());
    ui->turnDisplay->setText(qs);
    ui->turnDisplay->setStyleSheet("QLabel {color : red; }");

    // need to reset player powers
    p1 -> usedRow_ = false;
    p1 -> usedCol_ = false;
    p1 -> usedConvert_ = false;
    p2 -> usedRow_ = false;
    p2 -> usedCol_ = false;
    p2 -> usedConvert_ = false;

    this -> scene -> update();

}

int gameWindow::findLowestRow(int col){
    for(int r = rows_-1; r >= 0; r --){
        if(board_[r][col] -> get_state() == 0){
            return r;
        }
    }
    return -1;
}

void gameWindow::visualize(int row, int col, int state){
    freeze = true;
    if(row != 0){     // no need to visualize the top row
        for(int i = 0; i < row; i ++){
            board_[i][col] -> set_state(state);
            delay(100);
            board_[i][col] -> set_state(0);
        }
    }
    freeze = false;
}

void gameWindow::delay(int millisecondsWait)
{
    QEventLoop loop;
    QTimer t;
    t.connect(&t, &QTimer::timeout, &loop, &QEventLoop::quit);
    t.start(millisecondsWait);
    loop.exec();
}

void gameWindow::on_clearRowButton_clicked()
{
    if(!freeze && currentPlayer->usedRow_ == false){
        clearRowSelected = true;
        ui -> centralwidget -> setCursor(Qt::ForbiddenCursor);
    }
}

void gameWindow::on_clearColButton_clicked()
{
    if(!freeze && currentPlayer->usedCol_ == false){
        clearColSelected = true;
        ui -> centralwidget -> setCursor(Qt::ForbiddenCursor);
    }
}

void gameWindow::on_convertDiskButton_clicked()
{
    if(!freeze && currentPlayer->usedConvert_ == false){
        convertDiskSelected = true;
        ui -> centralwidget -> setCursor(Qt::PointingHandCursor);
    }
}

void gameWindow::updateSecondsSlot(){
    seconds_ --;

    if(seconds_ == 0){
        seconds_ = 7;
        switchTurn();
    }else{
        std::string s = std::to_string(seconds_);
        QString qs(s.c_str());
        ui->secondslabel->setText(qs);
        }
}

void gameWindow::clearBoard(){
    for(int r = 0; r<rows_; r++){
        for(int c = 0; c<cols_; c++){
            board_[r][c] -> set_state(0);
        }
    }
}

void gameWindow::clearRow(int row){
    for(int i = 0; i < cols_; i ++){
        board_[row][i] -> set_state(0);
    }
    for(int a = row-1; a >= 0; a--){
        for(int b = 0; b < cols_; b++){
            int state = board_[a][b] -> get_state();
            board_[a+1][b] -> set_state(state);
            if(a == 0){ board_[a][b]->set_state(0);}
        }
    }
}

void gameWindow::clearCol(int col){
    for(int i = 0; i < rows_; i ++){
        board_[i][col] -> set_state(0);
    }
}

void gameWindow::switchTurn(){

    seconds_ = 8;

    if(currentPlayer -> pid_ == 1){
        currentPlayer = p2;
        turn_ = 2;
        std::string s = "Player 2's Turn";
        QString qs(s.c_str());
        ui->turnDisplay->setText(qs);
        ui->turnDisplay->setStyleSheet("QLabel {color : yellow; }");
    }else{
        currentPlayer = p1;
        turn_ = 1;
        std::string s = "Player 1's Turn";
        QString qs(s.c_str());
        ui->turnDisplay->setText(qs);
        ui->turnDisplay->setStyleSheet("QLabel {color : red; }");
    }
}

bool gameWindow::checkForWin(){
    bool win = false;
    int winner = 0;

    unsigned long r;
    unsigned long c;
    int count = 0;

    for(int p = 1; p < 3; p++){   // run checks for p1 and p2
        // check rows
        for(r = 0; r < rows_; r++){
            for(c = 0; c < cols_; c++){
                if(board_[r][c] -> get_state() == p){
                    count ++;
                }else{
                    count = 0;
                }
                if(count == n_){
                    win = true;
                    winner = p;
                    break;
                }
            }
        }

        count = 0;
        // check cols
        for(c = 0; c < cols_; c++){
            for(r = 0; r < rows_; r++){
                if(board_[r][c] -> get_state() == p){
                    count ++;
                }else{
                    count = 0;
                }
                if(count == n_){
                    win = true;
                    winner = p;
                    break;
                }
            }

        }

        int rowStart = 0;
        int colStart = 0;
        int rowMax = rows_;
        int colMax = cols_;

        // top left to bottom right - start from col 0
        for( rowStart = 0; rowStart < rowMax - n_+1; rowStart++){
            int row, col;
            count = 0;
            for( row = rowStart, col = 0; row < rowMax && col < colMax; row++, col++ ){
                if(board_[row][col]->get_state() == p){
                    count ++;
                }else{count = 0;}

                if(count == n_){
                    win = true;
                    winner = p;
                    break;
                }
            }
        }

        // top-left to bottom-right startig from row 0
        for( colStart = 1; colStart < colMax - n_+1; colStart++){
            count = 0;
            int row, col;
            for( row = 0, col = colStart; row < rowMax && col < colMax; row++, col++ ){
                if(board_[row][col]->get_state() == p){
                    count ++;
                }else{count = 0;}

                if(count == n_){
                    win = true;
                    winner = p;
                    break;
                }
            }
        }

        // top right to bottom left starting from far right column
        for(rowStart = 0; rowStart < rowMax - n_+1; rowStart++){
            int row, col;
            count = 0;
            for( row = rowStart, col = colMax -1; row < rowMax && col >= 0; row++, col-- ){
                if(board_[row][col]->get_state() == p){
                    count ++;
                }else{count = 0;}

                if(count == n_){
                    win = true;
                    winner = p;
                    break;
                }
            }
        }

        // top right to bottom left start from top row
        for( colStart = colMax - 1; colStart >= n_ -1; colStart--){
            count = 0;
            int row, col;

            for( row = 0, col = colStart; row < rowMax && col >= 0; row++, col-- ){

                if(board_[row][col]->get_state() == p){
                    count ++;
                }else{count = 0;}

                if(count == n_){
                    win = true;
                    winner = p;
                    break;
                }

            }
        }
    }

    if(win){
        qDebug() << "player" << winner << " won";

        if(winner == 1){
            p1 -> score_ ++;
        }else{
            p2 -> score_ ++;
        }

        secTimer -> stop();


        winDialog * win =  new winDialog;
        win -> setVals(winner,p1 -> score_, p2 -> score_, n_);
        connect(win,&winDialog::newRound,this,&gameWindow::newRound);

        win->setModal(true);
        win->exec();

        return true;
    }

}

bool gameWindow::checkForDraw(){

    for(int r = 0; r < rows_; r++){
        for(int c = 0; c < cols_; c++){
            if(board_[r][c]->get_state() == 0){
                return false;
            }
        }
    }
    return true;

}

void gameWindow::on_leaderBoardButton_clicked()
{

    if(!freeze){
        leadWindow * window = new leadWindow;
        window -> setVals(p1 -> score_, p2 -> score_);

        window->setModal(true);
        window->exec();
        }

}


void gameWindow::on_pushButton_clicked()
{
    int winner;
    if(turn_ == 1){
        p2 -> score_ ++;
        winner = 2;
    }else{
        p1 -> score_ ++;
        winner = 1;
    }

    winDialog * win =  new winDialog;
    win -> setVals(winner,p1 -> score_, p2 -> score_, n_);
    connect(win,&winDialog::newRound,this,&gameWindow::newRound);

    win->setModal(true);
    win->exec();

    newRound();
}

