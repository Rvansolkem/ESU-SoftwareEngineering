#include "CardList.h"

CardList::CardList(){
    //?
}

void CardList::push(Card c){
    v.push_back(c);
}

Card CardList::pop(){
    Card temp=v[v.size()-1];
    v.pop_back();
    return temp;
}

int CardList::size(){return v.size();}

Card CardList::at(int i){return v[i];}
