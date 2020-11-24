/*
* made by Sean Crowley: team 1
* discord username: mr_crowley#8084
*/
#include "Card.h"
//sets boolanes and nothing else. returns will return null


Card::Card(int ra,int su){
    setSuit(su);
    setRank(ra);
    selected=false;
    faceUp=false;
}

void Card::setSuit(int su){s=su;}

void Card::setRank(int ra){r=ra;}

int Card::getRank(){
    return r; //maybe make this a switch that returns a string for each enum
}

int Card::getSuit(){
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