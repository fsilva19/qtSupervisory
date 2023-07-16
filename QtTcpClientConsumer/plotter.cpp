#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>
#include <iostream>

Plotter::Plotter(QWidget *parent)
    : QWidget{parent}
{

}
void Plotter::paintEvent(QPaintEvent *event){
    QPainter painter(this);
    QBrush brush;
    QPen pen;
    int x1, y1, x2, y2;
    brush.setColor(QColor(250,250,10));
    brush.setStyle(Qt::SolidPattern);

    pen.setColor(QColor(20,150,250));
    pen.setWidth(2);

    painter.setBrush(brush);
    painter.setPen(pen);
    painter.drawRect(0,0,width(), height());

    pen.setColor(QColor(25,6,90));
    x1 = 0;
    y1 = 1*height();
    y2 = valor;
    double m = (double)(height() - y2) / (double)width();


    for(int i = 1; i<width(); i++){

        x2 = i + width()/30;
        y2 = (m*x2 + valor);
        painter.drawLine(x1,y1,x2,y2);
        x1 = x2;
        y1 = y2;
    }
}

void Plotter::setValor(int _valor)
{
    valor = _valor;
    repaint();
}





















