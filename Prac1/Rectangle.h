#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <string>

class Rectangle : public Shape
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