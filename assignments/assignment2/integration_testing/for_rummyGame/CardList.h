#ifndef CARDLIST_H
#define CARDLIST_H

#include "ICardList.h"
//#include "Card.h"
class ICard;
#include <string>
#include <vector>

class CardList : public ICardList
{
	private:

	int numCards;
	int current_index;
	std::vector<ICard*> list;
	
	public:
		CardList();
		~CardList();

		// WHere are the methods for putting cards in the list???  Suggest the following:
		void push(ICard*);
		void push_front(ICard*);
			// need addAtIndex(ICard*, int) method?

		// Card iterator replacement
		ICard* pullTopCard();
		void setFirst(); // what does this method do?
		ICard* getFirst();
		ICard* getNext();
		bool isLast();
		bool isEmpty();
		//

		//
        ICard* at(int);
		ICard* pop();
		ICard* pop_front();
		ICard* removeByIndex(int index);
		void shuffle(); // shuffles itself, so no param or ret value
		//
		void sortBySuit();
		void sortByRank();
        int size();
		void writeListToFile(std::string);
		void readFromFile(std::string);
};
#endif