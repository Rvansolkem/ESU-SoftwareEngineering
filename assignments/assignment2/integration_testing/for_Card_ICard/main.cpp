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
	std::cout << "\n Card -> ICard\n";
	//no modifactions allowed from an ICard instance
		//only accessing is allowed
	printIState( (ICard*) temp);
	int32_t w=100, h=100;
	BMP* tempBMP = new BMP(w, h);
	const char* filename="tempImage.bmp";
	uint32_t w, h, x, y;
	uint8_t b, g, r, a=0;
	tempBMP->fill_region(x, y, w, h, b, g, r, a);
	tempBMP->write(filename);
	return 0;
}