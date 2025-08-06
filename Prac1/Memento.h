#ifndef MEMENTO_H
#define MEMENTO_H

#include "Shape.h"

class Memento{
    public:
        Memento(Shape* elements);
    private:
        friend class Canvas; // tell Canvas that it can touch private parts >~< 
        Shape* shapes;
};

#endif