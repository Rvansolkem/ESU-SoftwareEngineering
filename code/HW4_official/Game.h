#ifndef GAME_H
#define GAME_H
#include "IStack.h"

class Game{
    private:
        IStack* deck;
        IStack* stack;
    public:
        /*precondition: none
        *postcondition: makes a game based on Istacks passed
        */
        Game(IStack*, IStack*);

        /*precondition: Game exists
        *postcondition: moves the last card from the first passed parameter to the end of the 
            second list
        */
        void move();

        /*precondition: game exists
        *postcondition: moves the last card from the second parameter to the end of the first list
        */
        void undo();
};
#endif