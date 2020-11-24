/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef ROWOFSTACKS_H
#define ROWOFSTACKS_H
#include "IListofListsSTUB.h"
#include "Stack.h"
#include <vector>

class RowOfStacks: public IListofLists{
    private: 
        std::vector<Stack*> row;
        int currIndex;
    public:
		ICardList* listIterator(); // this is in IListofLists, but not clear what it is supposed to do

        int numElements();
	    ICardList* getFirst();
	    bool isFirst();
	    ICardList* getLast();
	    bool isLast();
	    ICardList* getNext();
	    ICardList* getPrevious();
        //above inheritted
        //there are return type issues from above
        void add(Stack*);
        void add(Stack*, int);
        Stack* remove(int);
        void read(std::string);
        void write();
        RowOfStacks();
        ~RowOfStacks(){};
        Stack* at(int);
};

#endif