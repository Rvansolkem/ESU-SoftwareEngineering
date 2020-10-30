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
        return v.front();
    }
}

Card* CardList::getNext(){
    Card* temp=v.at(current_index);
    current_index++;
    return temp;
}