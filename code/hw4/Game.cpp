/*
* made by Sean Crowley: team 1
* discord username: mr_crowley#8084
*/
#include "Game.h"

Game::Game(Deck * d, SStack * s){
    deck.setDeck(d);
    stack.setStack(s);
}

void Game::move(){
    //move cards from deck to stack
    Card temp;
    temp=deck.deal();
    stack.push(temp);
}

void Game::undo(){
    //move top card from stack back to deck
    Card temp=stack.pop();
    deck.addCard(temp);
}