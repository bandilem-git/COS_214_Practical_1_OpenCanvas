#include "Memento.h"

#include "Caretaker.h"
// Constructor
Memento::Memento(Shape* elements){
    shapes = elements->clone(); // accurate copies
    
} // not sure if it even matters if it's null or not 