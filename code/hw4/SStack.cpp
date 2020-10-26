#include "SStack.h"

SStack::SStack(){
    v.clear();
}

void SStack::push(Card c){
    v.push_back(c);
}

Card SStack::pop(){
    Card temp=v[v.size()-1];
    v.pop_back();
    return temp;
}

int SStack::size(){return v.size();}

Card SStack::at(int i){return v[i];}

void SStack::setStack(SStack * s){
    v.clear();
    for(int i=0;i<s->size();i++){
        v.push_back(s->at(i));
    }
}