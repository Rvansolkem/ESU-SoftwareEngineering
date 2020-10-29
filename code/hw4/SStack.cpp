#include "SStack.h"

SStack::SStack(){
   v=new CardList();
}

void SStack::push(ICard* c){
    v->push(c);
}

ICard* SStack::pop(){
    return v->pop();
}

int SStack::size(){
    return v->size();
}

ICard* SStack::at(int i){
    return v->at(i);
}

void SStack::setStack(SStack * s){
    /*v.clear();
    for(int i=0;i<s->size();i++){
        v.push_back(s->at(i));
    }*/
}