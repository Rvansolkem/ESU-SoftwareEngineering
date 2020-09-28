#include "Deck.h"
#include "Card.cpp"
#include <string>
#include <algorithm>
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