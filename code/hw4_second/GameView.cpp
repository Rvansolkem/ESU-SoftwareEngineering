#include "GameView.h"
#include <iostream>
GameView::GameView(IReadCardList* first, IReadCardList* sec){
    l1=first;
    l2=sec;
}

void GameView::display(){
    std::cout<<"List1:";
    try{
        std::cout<<((CardList*)l1)->getFirst()->getRank()<<" ";
        while(true){
            std::cout<<((CardList*)l1)->getNext()->getRank()<<" ";
        }
    }
    catch(const char* msg){
        //do nothing just want out of the exception thrown
        
    }
    std::cout<<"\nList2: ";
    try{
        std::cout<<l2->getFirst()->getRank()<<" ";
        std::cout<<"got past the first print";
        while(true){
            std::cout<<l2->getNext()->getRank()<<" ";
        }
    }
    catch(const char* msg){
        //do nothing just want out of the exception thrown
        
    }
    std::cout<<"\n\n";
}
