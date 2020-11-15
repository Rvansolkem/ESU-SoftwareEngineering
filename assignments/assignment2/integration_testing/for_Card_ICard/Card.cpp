/*
* made by Sean Crowley: team 1
* discord username: mr_crowley#8084
*/
#include "Card.h"
//sets boolanes and nothing else. returns will return null


Card::Card(ICard::rank ra,ICard::suit su){
    setSuit(su);
    setRank(ra);
    selected=false;
    faceUp=false;
}

void Card::setSuit(ICard::suit su){s=su;}

void Card::setRank(ICard::rank ra){r=ra;}

ICard::rank Card::getRank(){
    return r; //maybe make this a switch that returns a string for each enum
}

ICard::suit Card::getSuit(){
    return s;
}

bool Card::isFaceUp(){return faceUp;}

bool Card::isSelected(){return selected;}

void Card::select(){selected=!selected;}
void Card::flip(){faceUp=!faceUp;}

CardView* Card::getCardView(){
   //to do
   CardView* temp=new CardView(r, s, faceUp);
   return temp;
}