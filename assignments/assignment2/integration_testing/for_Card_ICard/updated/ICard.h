/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef ICARD_H //added extra underscore for debugging
#define ICARD_H

//#include <string>
//#include "ICardView.h" //this might have to be CardView.h

class ICardView;

class ICard{

    public:
		//define an enum to take as a parameter for setting suit and rank
		enum Rank {
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
		enum Suit {
			Spades,
			Hearts,
			Clubs,
			Diamonds
		};
		
		~ICard(){};

        //returns enum
        virtual Rank getRank() = 0;
        virtual Suit getSuit() = 0;

        //return instance of ICardView that reflects this instance of card for GUI layer
        virtual ICardView* getCardView() = 0;
        virtual bool isSelected() = 0;
        virtual bool isFaceUp() = 0;
};

#endif