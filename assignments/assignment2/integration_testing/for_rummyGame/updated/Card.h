/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef CARD_H
#define CARD_H
#include "ICard.h"


class Card: public ICard{
    private:
        int suit;
        int rank;
        bool faceUp;
        bool selected;
        //need ICardView private data
    public:
        Card(int, int);//use enums nor string
        ~Card();
        int getRank(); //from ICard
        int getSuit();//from ICard
        //void setSuit(ICard::suit); // don't let this happen
        //void setRank(ICard::rank);
        bool isFaceUp(); // might need to add this to the interface also
        bool isSelected(); // might need to add this to the interface also
        void select();
        void flip();
        ICardView* getCardView();//from ICard
};



#endif