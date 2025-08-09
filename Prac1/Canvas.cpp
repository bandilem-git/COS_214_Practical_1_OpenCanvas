#include "Canvas.h"

Memento* Canvas::captureCurrent(){
    // make sure shape exists
    if(!this->shapes) return nullptr; // could be nullptr now for c++11 we can decide 
    //should be successful 
    Memento* memento = new Memento(this->shapes);
    
    return memento;
}

void Canvas::undoAction(Memento* prev){
    if(!prev) return; // might as well exit save resources yk? :)
    this->shapes = prev->shapes; // actual memento-ing (set current state to previous state)
}