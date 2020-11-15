#ifndef GAMEVIEW_H
#define GAMEVIEW_H
#include "IReadCardList.h"
#include "CardList.h"
class GameView{
    private:
        IReadCardList* l1;
        IReadCardList* l2;
    public:
        /*precondition: none
        *postcondition: creates a gameview based on the IReadCardLists passed
        */
        GameView(IReadCardList*, IReadCardList*);

        /*precondition: GameView exists
        *postcondition: will output (using std::cout) the contents of each list
        */
        void display();
};
#endif