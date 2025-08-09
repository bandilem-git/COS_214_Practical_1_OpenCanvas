#include "Caretaker.h"

void Caretaker::storeMemento(Memento* m){ 
    if(!m){
       return; 
    }
    Mementos.push_back(m);
}

Memento* Caretaker::getLatestMemento(){
    if(Mementos.empty()&& Mementos.size() <= 0){
        return nullptr;
    }
    
    Memento* latest = Mementos.at(Mementos.size()-1);
    Mementos.pop_back();

    if(!latest){
        return nullptr;
    }
        
    return latest;
}

Caretaker::Caretaker(){
    this->latest = nullptr; 
}