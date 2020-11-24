/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef CARD_H
#define CARD_H
#include "ICard.h"

class Card: public ICard{
    private:
        int s;
        int r;
        bool faceUp;
        bool selected;
        //need ICardView private data
    public:
        Card(int, int);//use enums nor string
        ~Card();
        int getRank(); //from ICard
        int getSuit();//from ICard
        void setSuit(int s);
        void setRank(int r);
        bool isFaceUp();
        bool isSelected();
        void select();
        void flip();
        CardView* getCardView();//from ICard
};


#endif