/*
* made by Sean Crowley: team 1
* discord username: mr_crowley#8084
*/
#include "Game.h"

Game::Game(Deck * d, SStack * s){
    deck=(IStack*)d;
    stack=(IStack*)s;
}

void Game::move(){
    //move cards from deck to stack
    ICard* temp;
    temp=deck->pop();
    stack->push(temp);
}

void Game::undo(){
    //move top card from stack back to deck
    ICard* temp=stack->pop();
    deck->push(temp);
}