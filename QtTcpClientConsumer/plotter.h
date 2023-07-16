#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QTimer>

class Plotter : public QWidget
{
    Q_OBJECT
private:
    int valor;
    QTimer *atual;
public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
public slots:
    void setValor(int _valor);
signals:

};

#endif // PLOTTER_H
