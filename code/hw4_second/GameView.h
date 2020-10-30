#ifndef GAMEVIEW_H
#define GAMEVIEW_H
#include "IReadCardList.h"
#include "CardList.h"
class GameView{
    private:
        IReadCardList* l1;
        IReadCardList* l2;
    public:
        GameView(IReadCardList*, IReadCardList*);
        void display();
};
#endif