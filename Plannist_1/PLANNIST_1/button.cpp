#include "button.h"

Button::Button(const QPolygon &poly,QWidget *parent) : QPushButton(parent), polygon_(poly)
{
    setGeometry(0,0,200,500);
    setMouseTracking(true);
    setMask(QPolygon(poly));
}

Button::Button(){

}
