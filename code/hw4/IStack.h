#ifndef ISTACK_H 
#define ISTACK_H
#include "Card.h"

class IStack{
    public:
        //virtual ~IStack()=0;
        virtual void push(Card) = 0;
        virtual Card pop() = 0;
};
//IStack::~IStack(){}

#endif 