#ifndef SQUARE_H
#define SQUARE_H

#include "Shape.h"
#include <string>

class Square : public Shape
{
public:
    Shape *clone();

private:
    int length;
    int width;
    std::string colour;
    int position_x;
    int position_y;
};

#endif