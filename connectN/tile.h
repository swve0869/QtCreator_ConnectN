#ifndef TILE_H
#define TILE_H

#include <QObject>
#include <QColor>
#include <QGraphicsItem>

class Tile : public QObject, public QGraphicsItem {

   Q_OBJECT
public:
    Tile(int x,int y, int width, int row, int col, int state): x_(x), y_(y),width_(width),row_(row),col_(col),state_(state){
        QColor c(255,255,255);
        color_ =  c;
    }

    int get_x() const { return x_; }  // inline member function
    int get_y() const { return y_; }  // inline member function
    int get_row() const { return row_; }  // inline member function
    int get_col() const { return col_; }  // inline member function
    int get_state() const { return state_; }  // inline member function
    void set_state(int s);


    QRectF boundingRect() const override;
    QPainterPath shape() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *item, QWidget *widget) override;

private:
    int x_;
    int y_;
    int width_;
    int row_;
    int col_;
    int state_;
    QColor color_;

signals:
    void TileSelected(Tile*t);

protected:
     void mousePressEvent(QGraphicsSceneMouseEvent *event) override;

};

#endif // TILE_H
