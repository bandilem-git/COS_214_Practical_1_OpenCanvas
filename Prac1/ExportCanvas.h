#ifndef EXPORTCANVAS_H
#define EXPORTCANVAS_H
#include "Canvas.h"

class ExportCanvas{
    private:
    //attributes
    Canvas* canvas;
    //Methods
    void prepareCanvas();
    void renderElements();
    virtual void saveToFile();

    public:
    void exportToFile();

};

#endif