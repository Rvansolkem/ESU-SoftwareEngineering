#ifndef CARDLIST_H
#define CARDLIST_H
#include <vector>
#include "Card.h"
#include "IReadCardList.h"
class CardList : IReadCardList{
    private:
        std::vector<Card> v;
    public: 
        CardList();
        void push(Card c);
        Card pop();//remove and return last element
        int size();
        Card at(int);

};

#endif