#pragma once
#ifndef Game_h
#define Game_h
#include <string>
#include <vector>
#include "Deck.h"
#include "SStack.h"

class Game{
private:
    IStack* deck;
    IStack* stack;
public:
    Game(Deck * , SStack * );
    void move();
    void undo();
};
#endif