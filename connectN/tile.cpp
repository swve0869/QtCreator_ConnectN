#include "tile.h"

#include <cstdlib>
#include <ctime>
#include <cmath>
#include <iostream>
#include <QtWidgets>

QRectF Tile::boundingRect() const
{
    return QRectF(x_, y_, width_, width_);
}

QPainterPath Tile::shape() const
{
    QPainterPath path;
    path.addEllipse(x_, y_, width_, width_);
    return path;
}

void Tile::paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget)
{
    Q_UNUSED(widget);

    QBrush b = painter->brush();
    painter->setBrush(QBrush(color_));

    painter->drawEllipse(QRect(this->x_, this->y_, this->width_, this->width_));
    painter->setBrush(b);
}


void Tile::set_state(int s){
    state_ = s;
    if(state_ == 0){color_ = QColor(255,255,255);}
    if(state_ == 1){color_ = QColor(255,0  ,0  );}
    if(state_ == 2){color_ = QColor(255,255,0  );}
    this -> update();
}

void Tile::mousePressEvent(QGraphicsSceneMouseEvent *event){

    qDebug() << row_ << "  " << col_;

    emit TileSelected(this);
}

