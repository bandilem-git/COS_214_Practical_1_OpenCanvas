#ifndef MEMENTO_H
#define MEMENTO_H

#include "Shape.h"

class Memento{
    public:
        Memento(Shape* elements);
    private:
        Shape* shapes;
};

#endif