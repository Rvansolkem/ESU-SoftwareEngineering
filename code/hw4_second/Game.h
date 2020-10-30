#ifndef GAME_H
#define GAME_H
#include "IStack.h"

class Game{
    private:
        IStack* deck;
        IStack* stack;
    public:
        Game(IStack*, IStack*);
        void move();
        void undo();
};
#endif