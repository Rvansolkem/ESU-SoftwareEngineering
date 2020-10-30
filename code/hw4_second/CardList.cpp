#include "CardList.h"
bool CardList::isEmpty(){
    bool temp=v.size()==0;
    return temp;
}

CardList::CardList(){}

void CardList::append(Card* c){
    v.push_back(c);
    numCards++;
}

Card* CardList::removeLast(){
    Card* temp=v.back();
    v.pop_back();
    return temp;
}

Card* CardList::getFirst(){
    if(!isEmpty()){
        current_index=1;
        return v.front();
    }
    else{
        throw "EndOfCardList";
    }
}

Card* CardList::getNext(){
    if(current_index==v.size()){
        throw "EndOfCardList";
    }
    Card* temp=v.at(current_index);
    current_index++;
    return temp;
}