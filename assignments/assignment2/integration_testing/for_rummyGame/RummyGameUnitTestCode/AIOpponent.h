#ifndef AIOPPONENT_H
#define AIOPPONENT_H

#include "IListOfLists.h"
#include "ICardList.h"
#include "ICard.h"
#include "IRummyGame.h"


class AIOpponent {
private:// private variables of AIopponent
	ICard* topCard;
public: // methods of AIOpponent
	void takeTurn(ICard* topCard);

};

#endif
