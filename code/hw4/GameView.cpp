#include "GameView.h" 
#include <iostream>

GameView::GameView(Deck * d, SStack * s){
    deck=(IReadCardList*)d;
    stack=(IReadCardList*)s;
}

void GameView::display(){
    for(int i=0;i<deck->size();i++){
        std::cout<<(dynamic_cast<Card*>(deck->at(i))->getName())<<" ";
    }
    std::cout<<"\n";
    for(int i=0;i<stack->size();i++){
        std::cout<<(dynamic_cast<Card*>(stack->at(i))->getName()) <<" ";
    }
}