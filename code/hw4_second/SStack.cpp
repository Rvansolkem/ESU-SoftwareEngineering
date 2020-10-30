#include "SStack.h"

bool SStack::isEmpty(){return list->isEmpty();}

void SStack::push(Card* c){
    list->append(c);
}

Card* SStack::pop(){
    return list->removeLast();
}

SStack::SStack(){
    list=new CardList();
}