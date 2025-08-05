#ifndef CANVAS_H
#define CANVAS_H

#include "Memento.h"

class Canvas{
    public:
        Memento* captureCurrent();
        void undoAction(Memento* prev);
    private:
        Shape* shapes;
};

#endif