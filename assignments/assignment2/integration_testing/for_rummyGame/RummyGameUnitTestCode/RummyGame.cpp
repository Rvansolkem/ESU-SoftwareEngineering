/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/ 
#include "RummyGame.h"

/////////////////////////inheritted methods first
ICardList* RummyGame::getDiscard(){return discardPile;}

IListOfLists* RummyGame::getFoundation(){return meld;}

ICardList* RummyGame::getPlayerHand(){
    return playerHand;
}
ICardList* RummyGame::getOpponentHand(){
    return opponentHand;
}

ICardList* RummyGame::getStock(){return deck;}


RummyGame::RummyGame(){
    //make deck
    deck=new Stack();
    playerHand= new Stack();
    opponentHand = new Stack();
    discardPile = new Stack();
    meld=new RowOfStacks();
    //need to make the deck
    for(int i=0;i<13;i++){
        for(int j=0;j<4;j++){
            Card* temp=new Card(i,j); 
            deck->push((ICard*)temp);
        }
    }
    // not shuffled bc its a stub and idc
    //deal to player and opponent hand
    for(int i=0;i<7;i++){
        ICard* temp1=deck->pop();
        ICard* temp2=deck->pop();
        playerHand->push(temp1);
        opponentHand->push(temp2);
    }
    //make playerturn true
    playerTurn=true;
    //make didDraw False
    didDraw=false;
}

RummyGame::~RummyGame(){
    delete playerHand;
    delete opponentHand;
    delete deck;
    delete discardPile;
    delete meld;
}

//game code

bool RummyGame::addToMeld(){
    CardList* temp=getSelectedCards();//getSelectedCards does logic for whos turn it is
    if(isValidForMeld(temp)){
        if(playerTurn){
            //remove cards in temp from playerHand
        }
        else{
            //remove cards in temp from opponent hand
        }
        //now push to meld
        meld->push(temp);
        //
    }
    else{
        return false;
    }
}

bool RummyGame::isValidForMeld(CardList* cards){
    //iterate through cards
    //check if suits are all same
        //if yes check if ranks are in a run
    //if not check if ranks are all same
}

void RummyGame::dealDeck(){
    if(playerTurn){
        playerHand->push(deck->pop()); // might need to type cast the card as ICard?
    }
    else{
        opponentHand->push(deck->pop());
    }
}

void RummyGame::discard(){
    //use Hand method (or typeCast as Cardlist) for removing a card
    //get CardList of selected cards
    CardList* temp=getSelectedCards();
    //if more than one, that shouldnt be allowed
    //if one, remove selected card from hand and push to discard (FACEUP)
    //player hand (or a typecasted version) should have a remove method 
        //that remove method should take a list or card   
}

void RummyGame::dealDiscard(){
    if(playerTurn){
        playerHand->push(discardPile->pop()); // might need to type cast the card as ICard?
    }
    else{
        opponentHand->push(discardPile->pop());
    }
}

void RummyGame::endGame(){
    //?
}

void RummyGame::makeComputerTurn(){}//use AIOpponent

void RummyGame::resumeGame(){}

void RummyGame::saveData(){
    //will use cardListWrite and RowOfStacks write for each private attribute
}

void RummyGame::sortHand(std::string by){
    if(playerTurn){
        if(by=="suit"){
            playerHand->sortBySuit();
        }
        if(by=="rank"){
            playerHand->sortByRank();
        }
    }
    else{
        if(by=="suit"){
            opponentHand->sortBySuit();
        }
        if(by=="rank"){
            opponentHand->sortByRank();
        }
    }
}

CardList* RummyGame::getSelectedCards(){
    CardList* selected=new CardList();

    if(playerTurn){
        //iterate through player hand
        //the iteration is supposed to be handled by CardList
        //if card is selected .isSelected(), then add to cardlist
    }
    else{
        //same as above
    }
    return selected;
}