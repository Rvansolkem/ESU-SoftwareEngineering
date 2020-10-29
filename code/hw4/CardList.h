#ifndef CARDLIST_H
#define CARDLIST_H
#include <vector>
#include "Card.h"
#include "IReadCardList.h"
class CardList : IReadCardList{
    private:
        std::vector<ICard> v;
    public: 
        CardList();
        void push(ICard* c);
        ICard* pop();//remove and return last element
        int size();
        ICard* at(int);

};

#endif