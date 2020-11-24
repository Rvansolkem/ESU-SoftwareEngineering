/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef STACK_H
#define STACK_H
#include "CardList.h"

class Stack: public CardList{
  public:
    Stack();
    ~Stack();
    
    void push(ICard*);
    void pushGroup(CardList*); // what order do they end up in?
    
    //returns AND removes last element added
    ICard* pop();
    ICard* at(int);
    //returns top card
	ICard* viewTop();
    ICardList* popGroup(int, int); 
    int size();
};

#endif