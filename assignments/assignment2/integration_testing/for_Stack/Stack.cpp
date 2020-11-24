/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#include <bits/stdc++.h>
#include "Stack.h"
//******************bsed of of cardlist **************
Stack::Stack(){
    //do nothing?
}

Stack::~Stack(){
}
        
void Stack::push(Card* c){
    //use Cardlist method for appending
    CardList::push(c);
}

//will push new stack onto major stack from the top down
void Stack::pushGroup(CardList* t){
    while(!(t->isEmpty())){
        //use cardlist append to push card popped from t
    }
}

//returns AND removes last element added
Card* Stack::pop(){
    return CardList::pop();   
}

Card* Stack::at(int i){return CardList::at(i);}

// returns a slice
CardList* Stack::popGroup(int startIndex, int endIndex){
    //iterate through till index matches start index
    //remove that index and add to temp
    //do this (endIndex - startIndex) times at that index
} 

int Stack::size(){
    return CardList::size();
}