#include <iostream>
#include "Card.h"
#include "CardViewSTUB.h"
#include "BMPSTUB.h"
#define concat(first, second) first secondstar
using namespace std;

void printState(Card* c){
	ICard::Rank rank=c->getRank();
	ICard::Suit suit=c->getSuit();
	bool s=c->isSelected();
	bool f=c->isFaceUp();
	std::cout<<"rank: "<<rank<<"\nsuit: "<<suit<<"\nis selected: "<<s<<"\nis face up: "<<f<<std::endl;

}
void printIState(ICard* c){
	ICard::Rank rank=c->getRank();
	ICard::Suit suit=c->getSuit();
	bool s=c->isSelected();
	bool f=c->isFaceUp();
	std::cout<<"rank: "<<rank<<"\nsuit: "<<suit<<"\nis selected: "<<s<<"\nis face up: "<<f<<std::endl;

}


int main(int argc, char *argv[])
{
	std::cout << "\n testing Card\n";
	Card* temp = new Card(ICard::Ace,ICard::Clubs);//ace of clubs
	printState(temp);
	std::cout << "\n selecting the card\n";
	temp->select();
	printState(temp);
	std::cout << "\n flipping the card\n";
	temp->flip();
	printState(temp);

	std::cout << "\n testing ICard\n";
	ICard* temp1= new Card(ICard::Three, ICard::Hearts);

	printIState(temp1);
	std::cout << "\n Card -> ICard\n";
	//no modifactions allowed from an ICard instance
		//only accessing is allowed
	printIState( (ICard*) temp);
	return 0;
}