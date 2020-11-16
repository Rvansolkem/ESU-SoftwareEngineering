#ifndef MATCHMAKER_H
#define MATCHMAKER_H


class CardList;
class ICard;

class Matchmaker {

private:
	CardList* list;

public:
	//No constructor since the class is not instantiated.
	//All methods are static. Please include class name before the method name when implementing the method

	//destructor
	~Matchmaker();

	//Check whether the cards are in ascending run
	static bool checkAscending(CardList*);

	//Check whether the cards are in descending run
	static bool checkDescending(CardList*);

	//Check whether the cards are the same suit
	static bool checkSuit(CardList*);

	//Check whether the cards are in alternating color
	static bool checkColor(CardList*);

	//Check whether the cards are the same rank
	static bool checkRank(CardList*);

	//Check whether the hand is sorted (for Rummy)
	static bool checkHand(CardList*);


};
#endif