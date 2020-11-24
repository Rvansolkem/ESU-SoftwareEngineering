#ifndef CARDLISTSTUB_H
#define CARDLISTSTUB_H

#include "CardSTUB.h"
#include "ICardListSTUB.h"
#include <string>
#include <vector>

class CardList : ICardList
{
	private:

	int numCards;
	int current_index;
	std::vector<Card*> list;
	
	public:
		CardList();
		~CardList();

		// WHere are the methods for putting cards in the list???  Suggest the following:
		void push(Card*);
		void push_front(Card*);
			// need addAtIndex(ICard*, int) method?

		// Card iterator replacement
		Card* pullTopCard();
		void setFirst(); // what does this method do?
		Card* getFirst();
		Card* getNext();
		bool isLast();
		bool isEmpty();
		//

		//
        Card* at(int);
		Card* pop();
		Card* pop_front();
		Card* removeByIndex(int index);
		void shuffle(); // shuffles itself, so no param or ret value
		//
		void sortBySuit();
		void sortByRank();
        int size();
		void writeListToFile(std::string);
		void readFromFile(std::string);
};
#endif