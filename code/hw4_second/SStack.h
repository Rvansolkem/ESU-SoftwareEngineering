#ifndef SSTACK_H
#define SSTACK_H
#include "IStack.h"
#include "CardList.h"
#include <vector>

class SStack : public IStack{
    private:
        CardList list;
    public:
        void push(Card*);
        Card* pop();
        bool isEmpty();
};

#endif