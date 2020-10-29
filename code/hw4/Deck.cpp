#include "Deck.h"
#include "Card.h"
#include <string>
#include <algorithm>
#include<stdlib.h>
#include<time.h>
#include <vector>
Card Deck::deal(){
    if(pile->size()>0){
        return pile->pop();
    }
}
Deck::~Deck(){
    while(pile->size() > 0){
        pile->pop();
    }
}
Deck::Deck(int n){
    pile=new SStack();
    //make deck of 10 random cards
    srand(time(NULL));
    char suits[]={'S', 'H', 'C', 'D'};
    for(int i=0;i<n;i++){
        int val=rand()%12 +1;//1-13
        int suit=rand()%4;
        pile->push(Card(val, suits[suit]));
    }
}
int Deck::size(){return pile->size();}

void Deck::push(Card c){
    pile->push(c);
}
Card Deck::at(int i){
    return pile->at(i);
}