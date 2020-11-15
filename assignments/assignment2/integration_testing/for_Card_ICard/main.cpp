#include <iostream>
#include "Card.h"
#include "CardView.h"
#define concat(first, second) first secondstar
using namespace std;

int main(int argc, char *argv[])
{
	//make 10 cards
	for(int i=0;i<10;i++){
		//for each card, create it, get its name
		const char* filename="cardImage.bmp";
		Card* temp=new Card(ICard::Ace, ICard::Clubs);
		//print state of everything
		cout<<"rank: "<<temp->getRank()<<endl;
		cout<<"suit: "<<temp->getSuit()<<endl;
		if(i==0){
			temp->flip();
			ICardView* cardv=temp->getCardView();
			cardv->write(filename);
		}
	}
	return 0;
}