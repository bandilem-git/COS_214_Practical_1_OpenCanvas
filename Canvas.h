#ifndef CANVAS_H
#define CANVAS_H

#include "Memento.h"

class Canvas{
    public:
        Memento* captureCurrent(); //create
        void undoAction(Memento* prev); // set
    private:
        Shape* shapes; 
};

#endif