#include "SStack.h"

void SStack::push(Card* c){
    append(c);
}

Card* SStack::pop(){
    return removeLast();
}
bool SStack::isEmpty(){
    return CardList::isEmpty();
}