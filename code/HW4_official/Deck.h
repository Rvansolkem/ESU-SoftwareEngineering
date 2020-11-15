#ifndef DECK_H
#define DECK_H
#include "SStack.h"

class Deck : virtual public SStack{
    public:
        /*precondition: none
        *postcondition: makes a list of cards, length is the int passed
        */
        Deck(int);
};
#endif