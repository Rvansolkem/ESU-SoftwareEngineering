#ifndef CARD_H
#define CARD_H

class Card{
    private:
        int rank;
    public:
        /*precondition: none
        *postcondition: creates a card with rank = passed int
        */
        Card(int);

        /*precondition: card exists
        *postcondition: return the rank of this instance of card
        */
        int getRank();
};
#endif