/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef RUMMYGAME_H
#define RUMMYGAME_H
#include "IRummyGame.h"
#include "RowOfStacks.h" //includes card, stack, deck, hand, cardlist, cardview
#include "CardList.h"
#include "Matchmaker.h"
#include "AIOpponent.h"
#include "Card.h"


class RummyGame : public IRummyGame
{
    private: 
        //might want variables for each players score so its counted
            //as the game goes on
            //otherwise we need a way to link cards pushed to meld with the player 
            //that pushed them
        Stack* playerHand;
        Stack* opponentHand;
        Stack* deck;
        Stack* discardPile; //stack because pop and push are all we really need from it
        RowOfStacks* meld;
        bool playerTurn;
        bool didDraw;

    public:
        RummyGame();
	    ICardList* getStock();//from IRummyGame
    	ICardList* getPlayerHand();//from IRummyGame, will now return list of pHand and oHand (in that order)
        ICardList* getOpponentHand();
        ICardList* getDiscard();//from IRummyGame
    	IListOfLists* getFoundation();//from IRummyGame
        //above shouldnt be void
    	~RummyGame();
        void dealDeck();//deal from deck to whoevers turn it is' hand
        void dealDiscard();//deal from discardPile
        bool addToMeld();//will add selected cards in hand to meld after checking if valid
        void discard();//will discard selected card from hand to discardPile and end turn (check for game end as well)
        void makeComputerTurn();//will incorporate AIOpponent
        void saveData();//will save game data so game can be resumed
        void sortHand(std::string);//will sort hand by suit or rank
        void resumeGame();//will resume game based off of last save data
        void endGame();//will end game (from knock or end of deck/discard or any circumstance)
        CardList* getSelectedCards();// will get a list of selected cards from hand. used for meld and discard
        bool isValidForMeld(CardList*);
        //might need another method for adding card to a meld pile that already exists on the meld

};
#endif