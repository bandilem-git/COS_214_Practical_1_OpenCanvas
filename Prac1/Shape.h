#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape{
    public:
        virtual Shape* clone() = 0;
    private:
        int length;
        int width;
        std::string colour;
        int position_x;
        int position_y;
};

#endif