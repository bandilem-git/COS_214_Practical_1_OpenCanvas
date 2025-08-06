#include "Memento.h"

#include <vector> // need to add to the class diagram 

class MementoStorage{
    private:
    std::vector<Memento*> Mementos;

    public:
    void storeMemento(Memento*);
    Memento* getMemento();

};