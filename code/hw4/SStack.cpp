#include "SStack.h"

SStack::SStack(){
   v=new CardList();
}

void SStack::push(Card c){
    v->push(c);
}

Card SStack::pop(){
    if(v->size()>0)
        return v->pop();
    else{
        throw;
    }
}

int SStack::size(){
    return v->size();
}

Card SStack::at(int i){
    return v->at(i);
}

void SStack::setStack(SStack * s){
    /*v.clear();
    for(int i=0;i<s->size();i++){
        v.push_back(s->at(i));
    }*/
}