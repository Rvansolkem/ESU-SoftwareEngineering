#pragma once
#ifndef SStack_h
#define SStack_h
#include <string>
#include <vector>
#include "Card.h"


class SStack{
private:
    std::vector<Card> v;
public:
    SStack();
    void push(Card c);
    Card pop();//remove and return last element
    void setStack(SStack *);
    int size();
    Card at(int);
};

#endif