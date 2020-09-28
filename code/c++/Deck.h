#pragma once
#ifndef Deck_h
#define Deck_h
#include <string>
#include "Card.h"
#include <vector>


class Deck{
    private:
        std::vector<Card> pile;
        int index;//point to current card for when dealing
    public:
        void makeDeck();
        void shuffleDeck();
        Card deal();
        Deck();
        ~Deck();
};

#endif