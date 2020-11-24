/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef CARDSTUB_H
#define CARDSTUB_H
class CardView;

class Card{
    private:
        int suit;
        int rank;
        bool faceUp;
        bool selected;
        //need ICardView private data
        CardView* cardView;
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
        CardView* getCardView();//from ICard
};



#endif