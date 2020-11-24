/*
* made by Sean Crowley: team 1
* discord username: mr_crowley#8084
*/
#include "Card.h"
//sets boolanes and nothing else. returns will return null

Card::Card(Rank ra,Suit su){
    rank=ra; //add error checking
    suit=su;
    selected=false;
    faceUp=false;
    cardView=0;
    //cardView=NewCardView(ra,su);
}

ICard::Rank Card::getRank(){return rank;}

ICard::Suit Card::getSuit(){return suit;}

bool Card::isFaceUp(){return faceUp;}

bool Card::isSelected(){return selected;}

void Card::select(){selected=!selected;}
void Card::flip(){faceUp=!faceUp;}

ICardView* Card::getCardView(){
   //to do
   return cardView;
}
