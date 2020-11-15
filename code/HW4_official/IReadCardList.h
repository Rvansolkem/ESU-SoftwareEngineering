#ifndef IREADCARDLIST_H
#define IREADCARDLIST_H
#include "Card.h"

class IReadCardList{
    public:
        /*preconfition: IReadCardList exists (is instantiated)
        * postcondition: returns first card in list
        */
        virtual Card* getFirst() = 0;

        /*precondition: Ireadcardlist exists
        * postcondition: returns the next card in the list
        */
        virtual Card* getNext() = 0;

        //deconstructs 
        virtual ~IReadCardList(){};
};
#endif