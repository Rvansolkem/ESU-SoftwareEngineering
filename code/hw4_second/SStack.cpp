#include "SStack.h"

bool SStack::isEmpty(){return (v.size() == 0);}

void SStack::push(Card* c){
    list.append(c);
}

Card* SStack::pop(){
    return list.removeLast();
}