#ifndef SStack_h
#define SStack_h
#include <string>
#include <vector>
#include "IStack.h"
#include "CardList.h"
#include "Card.h"


class SStack : public IStack{
    CardList* v;
public:
    SStack();
    void push(ICard* c);
    ICard* pop();//remove and return last element
    void setStack(SStack *);
    int size();
    ICard* at(int);
};

#endif