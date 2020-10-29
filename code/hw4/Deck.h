#pragma once
#ifndef Deck_h
#define Deck_h
#include <string>
#include "Card.h"
#include <vector>
#include "SStack.h"


class Deck{
    private:
        SStack* pile;
    public:
        ICard* deal();
        Deck(int n);
        ~Deck();
        void push(ICard* c);
        int size();
        ICard* at(int);
};

#endif