#ifndef IREADCARDLIST_H
#define IREADCARDLIST_H
#include "Card.h"

class IReadCardList{
    public: 
        virtual ICard* at(int) = 0; //return card at index
        virtual int size()=0;
};


#endif