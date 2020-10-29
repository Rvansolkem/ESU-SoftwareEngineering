#pragma once
#ifndef GameView_h
#define GameView_h
#include <string>
#include <vector>
#include "Game.h"

class GameView{
private:
    IReadCardList* deck;
    IReadCardList* stack;
public:
    GameView(Deck *, SStack *);
    void display();
};

#endif