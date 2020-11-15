#include <iostream>
#include "Card.h"
#include "CardView.h"
#include "BMP.h"
#define concat(first, second) first secondstar
using namespace std;

void printState(Card* c){
	int rank=c->getRank();
	int suit=c->getSuit();
	bool s=c->isSelected();
	bool f=c->isFaceUp();
	std::cout<<"rank: "<<rank<<"\nsuit: "<<suit<<"\nis selected: "<<s<<"\nis face up: "<<f<<std::endl;

}
void printIState(ICard* c){
	int rank=c->getRank();
	int suit=c->getSuit();
	bool s=c->isSelected();
	bool f=c->isFaceUp();
	std::cout<<"rank: "<<rank<<"\nsuit: "<<suit<<"\nis selected: "<<s<<"\nis face up: "<<f<<std::endl;

}


int main(int argc, char *argv[])
{
	std::cout << "\n testing Card\n";
	Card* temp = new Card(0,3);//ace of clubs
	printState(temp);
	std::cout << "\n selecting the card\n";
	temp->select();
	printState(temp);
	std::cout << "\n flipping the card\n";
	temp->flip();
	printState(temp);

	std::cout << "\n testing ICard\n";
	ICard* temp1= new Card(3, 1);

	printIState(temp1);
	std::cout << "\n flipping the card\n";
	//no modifactions allowed from an ICard instance
		//only accessing is allowed

	return 0;
}