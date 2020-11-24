#include "CardListSTUB.h"

CardList::CardList(){
    numCards=0;
    current_index=0;
}
CardList::~CardList(){
    delete &list;
}

void CardList::push(Card* c){
    list.push_back(c);
    numCards++;
}

void CardList::push_front(Card* c){
    list.insert(list.begin(),c);
    numCards++;
}

Card* CardList::at(int i){
    return list.at(i);
}
Card* CardList::pullTopCard(){
    return list.at(list.size()-1);
}

void CardList::setFirst(){
    current_index=0;
}

Card* CardList::getFirst(){
    current_index=1;
    return list.at(0);
}

Card* CardList::getNext(){
    Card* temp=list.at(current_index);
    current_index++;
    return temp;
}

bool CardList::isLast(){
    if(current_index==list.size()){
        return true;
    }
    return false;
}

bool CardList::isEmpty(){
    return list.empty();
}

Card* CardList::pop(){
    Card* temp=list.back();
    list.pop_back();
    return temp;
}

Card* CardList::pop_front(){
    Card* temp=list.at(0);
    list.erase(list.begin());
    return temp;
}

Card* CardList::removeByIndex(int index){
    Card* temp=list.at(index);
    list.erase(list.begin() + index);
    return temp;
}

int CardList::size(){return list.size();}

void CardList::shuffle(){

} 

void CardList::sortBySuit(){

}
void CardList::sortByRank(){

}

void CardList::writeListToFile(std::string filename){

}
void CardList::readFromFile(std::string filename){

}