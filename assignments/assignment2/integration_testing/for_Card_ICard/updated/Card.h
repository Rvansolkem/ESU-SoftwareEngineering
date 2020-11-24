/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef CARD__H
#define CARD__H
#include "ICard.h"


class Card: public ICard{
    private:
        Suit suit;
        Rank rank;
        bool faceUp;
        bool selected;
        ICardView* cardView;
        //need ICardView private data
    public:
        Card(Rank, Suit);//use enums nor string
        ~Card();
        Rank getRank(); //from ICard
        Suit getSuit();//from ICard
        //void setSuit(ICard::suit); // don't let this happen
        //void setRank(ICard::rank);
        bool isFaceUp(); // might need to add this to the interface also
        bool isSelected(); // might need to add this to the interface also
        void select();
        void flip();
        ICardView* getCardView();//from ICard
};



#endif