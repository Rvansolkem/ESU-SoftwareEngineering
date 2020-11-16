#ifndef ILISTOFLISTS_H
#define ILISTOFLISTS_H

class ICardList;

class IListOfLists {

public:

	//virtual ICardList* listIterator() = 0;
	virtual int numElements() = 0;
	virtual ICardList* getFirst() = 0;
	virtual bool isFirst() = 0;
	virtual ICardList* getLast() = 0;
	virtual bool isLast() = 0;
	virtual ICardList* getNext() = 0;
	virtual ICardList* getPrevious() = 0;
    virtual void push(ICardList*)=0;
    virtual ICardList* pop()=0;
	~IListOfLists() { };
};
#endif