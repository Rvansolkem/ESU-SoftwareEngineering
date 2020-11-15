/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef CARD_H
#define CARD_H
#include "ICard.h"

class Card: public ICard{
    private:
        ICard::suit s;
        ICard::rank r;
        bool faceUp;
        bool selected;
        //need ICardView private data
    public:
        Card(ICard::rank, ICard::suit);//use enums nor string
        ~Card();
        ICard::rank getRank(); //from ICard
        ICard::suit getSuit();//from ICard
        void setSuit(ICard::suit s);
        void setRank(ICard::rank r);
        bool isFaceUp();
        bool isSelected();
        void select();
        void flip();
        CardView* getCardView();//from ICard
};



#endif