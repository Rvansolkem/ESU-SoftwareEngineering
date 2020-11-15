#ifndef ISTACK_H
#define ISTACK_H
#include "Card.h"

class IStack{
    public:
        /*precondition: IStack exists
        *  postcondition: adds another card to the stack
        */
        virtual void push(Card*) = 0;
        /*precondition: IStack exists
        *postcondition: removes last card in list and returns it
        */
        virtual Card* pop() = 0;
        /*precondition: IStack exists
        *returns true if list is empty, false otherwise
        */
        virtual bool isEmpty() = 0;
        /*precondition: IStack exists
        *deconstructs
        */
        virtual ~IStack(){};
};
#endif