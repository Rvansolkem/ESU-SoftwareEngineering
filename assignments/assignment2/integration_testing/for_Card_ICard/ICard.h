/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef ICARD_H
#define ICARD_H
#include <string>
#include "CardView.h" //this might have to be CardView.h

//class ICardView;

//define an enum to take as a parameter for setting suit and rank
//moved to inside of ICard for inheritance



class ICard{
    public:
        enum suit{
            Spades,
            Hearts,
            Clubs,
            Diamonds
        };
        enum rank{
            Ace,
            Two,
            Three,
            Four,
            Five,
            Six,
            Seven,
            Eight,
            Nine,
            Ten,
            Jack,
            Queen,
            King
        };
        /*
        takes enum as paramter
        example calling,  Card* t=new Card(Card::Ten, Card::Spades);
        */
        //ICard(rank, suit);

        ~ICard(){};

        //returns enum
        virtual rank getRank() = 0;
        virtual suit getSuit() = 0;

        //return instance of ICardView that reflects this instance of card for GUI layer
        virtual CardView* getCardView() = 0;
        virtual bool isSelected() = 0;
        virtual bool isFaceUp() = 0;
};

#endif