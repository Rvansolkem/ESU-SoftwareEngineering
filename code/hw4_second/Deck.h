#ifndef DECK_H
#define DECK_H
#include "SStack.h"

class Deck: public SStack{
    private:
        SStack s;
    public: 
        Deck(int);
};

#endif