#pragma once
#ifndef SStack_h
#define SStack_h
#include <string>
#include <vector>
#include "IStack.h"
#include "Card.h"


class SStack : public IStack{
private:
    std::vector<ICard> v;
public:
    SStack();
    void push(ICard* c);
    Card pop();//remove and return last element
    void setStack(SStack *);
    int size();
    Card at(int);
};

#endif