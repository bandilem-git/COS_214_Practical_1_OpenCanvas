#ifndef CARETAKER_H
#define CARETAKER_H

#include "Memento.h"

#include <vector> // need to add to the class diagram 

class Caretaker{
    private:
    std::vector<Memento*> Mementos;
    Memento* latest;
    public:
    Caretaker();
    void storeMemento(Memento* m); // stores Memento*
    Memento* getLatestMemento(); //  gets Memento pops first and then removes it from the vector and updates latest
};

#endif