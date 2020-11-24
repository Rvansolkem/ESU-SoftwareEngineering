#ifndef ICARDLIST_H
#define ICARDLIST_H

//#include "ICardCollection.h"
//#include "ICard.h"

class ICard;

/*Inherits from ICardCollection.
Contains methods to iterate over its list, and returns its elements as ICard.
*/

class ICardList
{
	public:
		virtual ICard* pullTopCard() = 0; //Picks the top card from pile
		virtual void setFirst() = 0;
		virtual ICard* getFirst() = 0;
		virtual ICard* getNext() = 0;
		virtual bool isLast() = 0;
		virtual bool isEmpty() = 0;
        virtual ICard* pop()=0;
		virtual ICard* at(int)=0;
        virtual void push(ICard*)=0;
		virtual int size()=0;
		virtual ~ICardList() {};

};
#endif