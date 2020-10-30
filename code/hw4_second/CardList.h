#ifndef CARDLIST_H
#define CARDLIST_H
#include "IReadCardList.h"
#include "Card.h"
#include <vector>

class CardList: public IReadCardList{
    private:
        int numCards=0;
        std::vector<Card*> v;
        int current_index=0;
    public:
        CardList();
        Card* getFirst();
        Card* getNext();
        void append(Card*);
        Card* removeLast();
        bool isEmpty();
};

#endif