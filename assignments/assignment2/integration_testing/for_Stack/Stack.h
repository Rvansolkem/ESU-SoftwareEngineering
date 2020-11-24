/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef STACK_H
#define STACK_H
#include "CardListSTUB.h"

class Stack: public CardList{
  public:
    //void cardIterator(ICardList*);
    //ICard pullTopCard(ICardCollection*); //should be return type Card right?
    //void writeListToFile(string);
    //void readToFile(string);
      //above inheritted ***so don't repeat them!!!
    Stack();
    ~Stack();
    
    void push(Card* c);

    //bool isEmpty();  // inherited from CardList

    //will push new stack onto major stack from the top down
    void pushGroup(CardList*); // what order do they end up in?
    
    //returns AND removes last element added
    Card* pop();

    //returns top card
	Card* viewTop();
//ICard* pop(int);  // what are these for?
 //   ICard* pop(std::string); // enum not string
      // returns a slice
    CardList* popGroup(int, int); // what are the params? what does this do?
    int size();

    //added for unittest
    Card* at(int);
};

#endif