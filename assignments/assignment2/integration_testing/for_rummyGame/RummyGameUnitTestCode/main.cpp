#include "RummyGame.h"
#include <iostream>

using namespace std;

RummyGame* game;

void printCard(int r, int s){
    if(r==0){
        cout<<"Ace of ";
    }
    if(r==1){
        cout<<"two of ";
    }
    if(r==2){
        cout<<"three of ";
    }
    if(r==3){
        cout<<"four of ";
    }
    if(r==4){
        cout<<"five of ";
    }
    if(r==5){
        cout<<"six of ";
    }
    if(r==6){
        cout<<"seven of ";
    }
    if(r==7){
        cout<<"eight of ";
    }
    if(r==8){
        cout<<"nine of ";
    }
    if(r==9){
        cout<<"ten of ";
    }
    if(r==10){
        cout<<"jack of ";
    }
    if(r==11){
        cout<<"queen of ";
    }
    if(r==12){
        cout<<"king of ";
    }

    if(s==0){
        cout<<"spades";
    }
    if(s==1){
        cout<<"hearts";
    }
    if(s==2){
        cout<<"clubs";
    }
    if(s==3){
        cout<<"diamonds";
    }
}

void printState(){
    ICardList* temp = game->getPlayerHand();
    temp->setFirst();
    cout<<"PlayerHand: ";
    ICard* tempCard=temp->getFirst();
    printCard(tempCard->getRank(), tempCard->getSuit());
    cout<<", ";
    //get first card and then use getNext with a dynamic check to get the rest of the cards
    while(! temp->isLast()){
        ICard* tempCard=temp->getNext();
        printCard(tempCard->getRank(), tempCard->getSuit());
        cout<<", ";
    }
    cout<<endl;
    temp->setFirst();
/////////////////////////// ^PLAYER HAND^ /////////////////////////
    temp = game->getOpponentHand();
    temp->setFirst();
    cout<<"OpponentHand: ";
    tempCard=temp->getFirst();
    //we dont want to print the card we just want X's
    cout<<"X ";
    //get first card and then use getNext with a dynamic check to get the rest of the cards
    while(! temp->isLast()){
        ICard* tempCard=temp->getNext();
        cout<<"X ";
    }
    cout<<endl;
    temp->setFirst();
////////////////////////// ^Opponent hand^ /////////////////////// 

    temp=game->getStock();
    cout<<"Deck: ";
    if(!temp->isEmpty()){
        cout<<"X\n";
    }
    else{
        cout<<"EMPTY\n";
    }
    //////////////////// ^Deck^ ///////////////////

    temp=game->getDiscard();
    cout<<"Discard: ";
    if(temp->size()>0){
        tempCard=temp->at(temp->size()-1);
        printCard(tempCard->getRank(), tempCard->getSuit());
    }
    else{
        cout<<"EMPTY";
    }
    cout<<endl<<endl;
///////////////////// ^ discard ^ ////////////////////
}

int drawChoice(){
    cout<<"1 to output gamestate\n2 to draw from deck\n3 to draw from discard pile\n";
    int choice=0;
    cin>>choice;
    if(choice==1)
        printState();
    return choice;
}

int discardOrMeld(){
    cout<<"1 to output gamestate\n2 to move to discard phase\n3 to move to adding to meld phase\n";
    int choice=0;
    cin>>choice;
    if(choice==1)
        printState();
    return choice;
}

void discardPart(){
    ICardList* temp = game->getPlayerHand();
    temp->setFirst();
    cout<<"PlayerHand: ";
    ICard* tempCard=temp->getFirst();
    printCard(tempCard->getRank(), tempCard->getSuit());
    //get first card and then use getNext with a dynamic check to get the rest of the cards
    while(! temp->isLast()){
        ICard* tempCard=temp->getNext();
        printCard(tempCard->getRank(), tempCard->getSuit());
        cout<<": 0,  "
    }
    cout<<endl;
    temp->setFirst();
}

void playerTurn(){
    int choice=drawChoice();
    while(choice<2 || choice>3){
        choice=drawChoice();
    }//must choose to draw in order to go to next step
    if(choice==1){
        game->dealDeck();
    }
    if(choice==2){
        game->dealDiscard();
    }
    //now we give the player an option to either discard (end) or add to meld
    choice=discardOrMeld();
    while(choice<2 || choice > 3){
        choice=discardOrMeld();
    }
    if(choice == 3){
        //adding to meld
        //player selects cards to add and theyre validity is checked internally
    }
    //player now discards, this point is reached no matter what and accounts for choice==2
    discardPart();
}


int main(){
    game = new RummyGame();
    bool gameOver=false;
    while(true){
        playerTurn();
        //check if game is over
        game->makeComputerTurn();
        //check if game is over
        if(gameOver)
            break;
    }
    cout<<"GAME IS NOW OVER\n";
    printState();
    return 0;
}