#include "GameView.h" 
#include <iostream>

GameView::GameView(Deck * d, SStack * s){
    deck=d;
    stack=s;
}

void GameView::display(){
    std::cout<<"List1:";
    for(int i=0;i<deck->size();i++){
        std::cout<<" "<<deck->at(i).getName();
    }
    std::cout<<"\nList2: ";
    for(int i=0;i<stack->size();i++){
        std::cout<<stack->at(i).getName() <<" ";
    }
    std::cout<<"\n\n";
}