#ifndef SSTACK_H
#define SSTACK_H
#include "IStack.h"
#include "CardList.h"
class SStack: virtual public IStack, virtual public CardList{
    public:
        void push(Card*);
        Card* pop();
        bool isEmpty();
};
#endif