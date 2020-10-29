#ifndef ISTACK_H 
#define ISTACK_H
#include "ICard.h"

class IStack{
    public:
        //virtual ~IStack()=0;
        virtual void push(ICard*) = 0;
        virtual ICard* pop() = 0;
};
//IStack::~IStack(){}

#endif 