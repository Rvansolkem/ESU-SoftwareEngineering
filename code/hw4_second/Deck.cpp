#include "Deck.h"

Deck::Deck(int n){
    s=new SStack();
    for(int i=0;i<n;i++){
        Card* temp=new Card(i+1);
        s->push(temp);
    }
}