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
        Card deal();
        Deck(int n);
        ~Deck();
        void push(Card c);
        int size();
        Card at(int);
};

#endif