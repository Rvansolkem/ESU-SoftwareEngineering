#include "RowOfStacks.h"
#include "Stack.h"
#include <iostream>

void printCard(Card* temp){
    if (temp->getRank()==1){
            std::cout<<"Ace of ";
        }
        else if (temp->getRank()==2){
            std::cout<<"Two of ";
        }
        else if (temp->getRank()==3){
            std::cout<<"Three of ";
        }
        else if (temp->getRank()==4){
            std::cout<<"Four of ";
        }
        else if (temp->getRank()==5){
            std::cout<<"Five of ";
        }
        else if (temp->getRank()==6){
            std::cout<<"Six of ";
        }
        else if (temp->getRank()==7){
            std::cout<<"Seven of ";
        }
        else if (temp->getRank()==8){
            std::cout<<"Eight of ";
        }
        else if (temp->getRank()==9){
            std::cout<<"Nine of ";
        }
        else if (temp->getRank()==10){
            std::cout<<"Ten of ";
        }
        else if (temp->getRank()==11){
            std::cout<<"Jack of ";
        }
        else if (temp->getRank()==12){
            std::cout<<"Queen of ";
        }
        else if (temp->getRank()==13){
            std::cout<<"King of ";
        }

        if(temp->getSuit()==1){
            std::cout<<"Spades";
        }
        else if(temp->getSuit()==2){
            std::cout<<"Hearts";
        }
        else if(temp->getSuit()==3){
            std::cout<<"Clubs";
        }
        else if(temp->getSuit()==4){
            std::cout<<"Diamonds";
        }
}

void printStack(Stack* s){
    for(int i=0;i>s->size();i++){
        Card* temp=s->at(i);
        printCard(temp);

        if(i+1 != s->size()){
            std::cout<<", ";
        }
        else{
            std::cout<<"\n";
        }
    }
}

void printRows(RowOfStacks* R){
    for(int i=0;i<R->numElements();i++){
        Stack* temp=R->at(i);
        std::cout<<"stack "<<i<<": ";
        printStack(temp);
    }
}

int main(){
    RowOfStacks* row=new RowOfStacks();
    for(int i=1;i<5;i++){
        //make 4 stacks and add them each to row, print them
        Stack* suitStack=new Stack();
        for(int j=1;j<14;j++){
            Card* temp=new Card(j,i);
            std::cout<<"card being added: ";
            printCard(temp);
            std::cout<<std::endl;
            suitStack->push(temp);
        }
        row->add(suitStack);
    }
    std::cout<<"row size: "<<row->numElements()<<"\n";
    //row is now a deck
    printRows(row);
    std::cout<<"\n\nEXPECTED OUTPUT: all the cards in the deck organzied in stacks by suit\n";
    return 0;
}