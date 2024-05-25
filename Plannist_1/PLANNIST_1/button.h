#ifndef BUTTON_H
#define BUTTON_H

#include <QPushButton>


class Button : public QPushButton
{
public:
    Button( QPolygon poly,QWidget *parent);
    ~Button();
};

#endif // BUTTON_H
