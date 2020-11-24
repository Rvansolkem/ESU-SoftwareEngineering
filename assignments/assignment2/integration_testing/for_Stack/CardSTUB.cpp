/*
* made by Sean Crowley: team 1
* discord username: mr_crowley#8084
*/
#include "CardSTUB.h"
//sets boolanes and nothing else. returns will return null

Card::Card(int ra,int su){
    rank=ra; //add error checking
    suit=su;
    selected=false;
    faceUp=false;
}

int Card::getRank(){return rank;}

int Card::getSuit(){return suit;}

bool Card::isFaceUp(){return faceUp;}

bool Card::isSelected(){return selected;}

void Card::select(){selected=!selected;}
void Card::flip(){faceUp=!faceUp;}

CardView* Card::getCardView(){
   return cardView;
}