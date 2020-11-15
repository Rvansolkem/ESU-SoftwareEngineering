#include "Deck.h"

Deck::Deck(int n){
    for(int i=0;i<n;i++){
        Card* temp=new Card(i+1);
        push(temp);
    }
}