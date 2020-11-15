#include "CardList.h"

CardList::CardList(){
    numCards=0;
    current_index=0;
}

void CardList::append(Card* c){
    v.push_back(c);
    numCards++;
}

Card* CardList::getFirst(){
    if(!isEmpty()){
        current_index=1;
        return v.front();
    }
    else{
        current_index=0;
        throw "List Is Empty";
    }
}

Card* CardList::getNext(){
    if(current_index<numCards){
        Card* temp=v.at(current_index);
        current_index++;
        return temp;
    }
    else{
        current_index=0;
        throw "List Is Empty";
    }
}

Card* CardList::removeLast(){
    current_index=0;
    Card* temp=v.back();
    numCards--;
    v.pop_back();
    return temp;
}

bool CardList::isEmpty(){
    return v.empty();
}