#include "Deck.h"
#include "Card.h"
#include <string>
#include <algorithm>
#include<stdlib.h>
#include<time.h>
#include <vector>
Card Deck::deal(){
    if(index>0){
        Card temp=pile.at(index);
        index--;
        pile.pop_back(); 
        return temp;
    }
}
void Deck::makeDeck(){
    index=51;
    char suits[]={'S', 'H', 'C', 'D'};
    for(int s=0;s<4;s++){
        for(int v=1;v<14;v++){
            pile.push_back(Card(v,suits[s]));
        }
    }
}
void Deck::shuffleDeck(){
    std::random_shuffle(pile.begin(), pile.end());
}
Deck::Deck(){
    index=51;
    makeDeck();
}
Deck::~Deck(){
    pile.clear();
}
Deck::Deck(int n){
    //make deck of 10 random cards
    index=n-1;
    pile.clear();
    srand(time(NULL));
    char suits[]={'S', 'H', 'C', 'D'};
    for(int i=0;i<n;i++){
        int val=rand()%14 +1;
        int suit=rand()%4;
        pile.push_back(Card(val, suits[suit]));
    }
}
Deck & Deck::getDeck(){return *this;}
int Deck::size(){return pile.size();}
void Deck::setDeck(Deck* d){
    pile=d->pile;
    index=d->index;
}
void Deck::addCard(Card c){
    pile.push_back(c);
}
Card Deck::at(int i){
    return pile[i];
}