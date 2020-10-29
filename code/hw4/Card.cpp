#include "Card.h"

void Card::setSuit(char s){
    switch(s){
        case 'H':
            suit="Hearts";
            break;
        case 'h':
            suit="Hearts";
            break;
        case 'S':
            suit="Spades";
            break;
        case 's':
            suit="Spades";
            break;
        case 'C':
            suit="Clubs";
            break;
        case 'c':
            suit="Clubs";
            break;
        case 'D':
            suit="Diamonds";
            break;
        case 'd':
            suit="Diamonds";
            break;
        default:
            suit="InvalidCardSuit";
            break;
    }
}
void Card::setValue(int v){
    switch (v)
    {
    case 1:
        value="Ace";
        break;
    case 2:
        value="Two";
        break;
    case 3:
        value="Three";
        break;
    case 4:
        value="Four";
        break;
    case 5:
        value="Five";
        break;
    case 6:
        value="Six";
        break;
    case 7:
        value="Seven";
        break;
    case 8:
        value="Eight";
        break;
    case 9:
        value="Nine";
        break;
    case 10:
        value="Ten";
        break;
    case 11:
        value="Jack";
        break;
    case 12:
        value="Queen";
        break;
    case 13:
        value="King";
        break;
    
    default:
        value="InvalidCardValue";
        break;
    }
}

void Card::setSuit(std::string s){
    suit=s;
}
std::string Card::getName(){
    return value+"_"+suit;
}
std::string Card::getSuit(){return suit;}
std::string Card::getRank(){return value;}
Card::Card(){}
Card::Card(int v, char s){
    Card::setSuit(s);
    Card::setValue(v);
}
Card::~Card(){
    //do onthing?
}

