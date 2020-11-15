#ifndef CARDLIST_H
#define CARDLIST_H
#include "IReadCardList.h"
#include <vector>

class CardList: virtual public IReadCardList{
    private: 
        std::vector<Card*> v;
        int numCards;
        int current_index;
    public: 
        /*precondition: none
        *postcondition: sets numCards, current_index
        */
        CardList(); 

        /*precondition: Cardlist exists
        * postcondition: returns the first card in the list
        *   increments current_index
        */
        Card* getFirst();

        /*precondition: Cardlist exists
        * postcondition: returns card at index current_index
        *   increments current_index
        *   if at the end of the list, sets current_index to 0 and throws errormsg
        */
        Card* getNext();

        /*precondition: Cardlist exists
        * postcondition: card in parameter is added to end of list
        *   numcard incremented
        */
        void append(Card*);

        /*precondition: Cardlist exists
        * postcondition: removes the last card in the list
        *   numcards decremented
        */
        Card* removeLast();

        /*precondition: Cardlist exists
        * postcondition: returns true if list is empty
        */
        bool isEmpty();
};
#endif