#include "Deck.h"

Deck::Deck(int n){
    for(int i=0;i<n;i++){
        s.push(&(Card(i+1)));
    }
}