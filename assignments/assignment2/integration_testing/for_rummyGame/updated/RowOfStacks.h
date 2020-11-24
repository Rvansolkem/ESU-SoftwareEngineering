/*
* made by Sean Crowley: team A
* discord username: mr_crowley#8084
*/
#ifndef ROWOFSTACKS_H
#define ROWOFSTACKS_H
#include "IListOfLists.h"
#include "Stack.h"
#include <vector>
//class IListOfLists;

class RowOfStacks: public IListOfLists{
    private: 
        std::vector<ICardList*> row;
        int currIndex;
    public:
		//ICardList* listIterator(); // this is in IListofLists, but not clear what it is supposed to do

        int numElements();
	    ICardList* getFirst();
	    bool isFirst();
	    ICardList* getLast();
	    bool isLast();
	    ICardList* getNext();
	    ICardList* getPrevious();
        //above inheritted
        //there are return type issues from above
        void push(ICardList*);
        void push(ICardList*, int);
        ICardList* pop();
        ICardList* pop(int);
        void read(std::string);
        void write();
        RowOfStacks();
        ~RowOfStacks();
};

#endif