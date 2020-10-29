#ifndef ICARD_H
#define ICARD_H
#include <string> //this might have to be CardView.h

class ICard{

    public:
        ICard();
        ICard(std::string suit, std::string rank);
        ~ICard();
        virtual std::string getRank() = 0;
        virtual std::string getSuit() = 0;
};

#endif