#ifndef IREADCARDLIST_H
#define IREADCARDLIST_H
#include "Card.h"

class IReadCardList{
    public:
        virtual Card* getFirst()=0;
        virtual Card* getNext()=0;
};

#endif