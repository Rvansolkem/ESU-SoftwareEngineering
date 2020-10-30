#ifndef ISTACK_H
#define ISTACK_H
#include "Card.h"

class IStack{
    public:
        virtual void push(Card*)=0;
        virtual Card* pop()=0;
        virtual bool isEmpty()=0;
};

#endif