#include "RowOfStacks.cpp"
//#include "IGame.h"
//#include "IRummyGame.h"

//temp include
#include <list>
#include <iterator>

class IRummyGame{
    private: 
        std::list <ICard> playerHand;
        std::list <ICard> opponentHand;
        std::list <ICard> deck;
        std::list <ICard> discardPile;
        bool playerTurn;
        bool didDraw;
        bool gin; // true if playing gin rummy

    public:
        IRummyGame(){
            //make deck
            //deal to player and opponent hand
            //make playerturn true
            //make didDraw False
        }
        
        void deckDeal(){}//deal from deck to whoevers turn it is' hand

        void discardDeal(){}//deal from discardPile

        void addToMeld(){}//will add selected cards in hand to meld after checking if valid

        void discard(){}//will discard card from hand to discardPile and end turn (check for game end as well)

        void makeComputerTurn(){}//will go through and make "good" moves as computer

        void saveData(){}//will save game data so game can be resumed

        void sortHand(){}//will sort hand by suit or rank
};
