#include "CardList.h"

CardList::CardList(){
    numCards=0;
    current_index=0;
}
CardList::~CardList(){
    delete &list;
}

void CardList::push(ICard* c){
    list.push_back(c);
    numCards++;
}

void CardList::push_front(ICard* c){
    list.insert(list.begin(),c);
    numCards++;
}
    // need addAtIndex(ICard*, int) method?
ICard* CardList::at(int i){
    return list.at(i);
}
ICard* CardList::pullTopCard(){
    return list.at(list.size()-1);
}

void CardList::setFirst(){
    current_index=0;
}

ICard* CardList::getFirst(){
    current_index=1;
    return list.at(0);
}

ICard* CardList::getNext(){
    ICard* temp=list.at(current_index);
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

ICard* CardList::pop(){
    ICard* temp=list.back();
    list.pop_back();
    return temp;
}

ICard* CardList::pop_front(){
    ICard* temp=list.at(0);
    list.erase(list.begin());
    return temp;
}

ICard* CardList::removeByIndex(int index){
    ICard* temp=list.at(index);
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