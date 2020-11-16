#ifndef IRUMMYGAME_H
#define IRUMMYGAME_H

class ICardList;
class IListOfLists;

class IRummyGame
{
public:
	virtual ICardList* getStock() = 0;
	virtual ICardList* getPlayerHand() = 0;
	virtual ICardList* getOpponentHand() = 0;
	virtual ICardList* getDiscard() = 0;
	virtual IListOfLists* getFoundation() = 0;
	virtual ~IRummyGame() {};
};
#endif