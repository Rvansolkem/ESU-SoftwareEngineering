#include "CardList.h"

CardList::CardList(){
    //?
}

void CardList::push(ICard* c){
    v.push_back(c);
}

ICard* CardList::pop(){
    ICard* temp=v[v.size()-1];
    v.pop_back();
    return temp;
}

int CardList::size(){return v.size();}

ICard* CardList::at(int i){return v[i];}
