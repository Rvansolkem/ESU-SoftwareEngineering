#include "Game.h"

Game::Game(IStack* source, IStack* dest){
    deck=source;
    stack=dest;
}

void Game::move(){
    if(!deck->isEmpty()){
        Card* temp=deck->pop();
        stack->push(temp);
    }
    //else{throw;}
}

void Game::undo(){
    if(!stack->isEmpty()){
        Card* temp=stack->pop();
        deck->push(temp);
    }
    //else{throw;}
}