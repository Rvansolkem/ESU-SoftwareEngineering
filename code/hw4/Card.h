#include <string>
#ifndef CARD_H
#define CARD_H
#include "ICard.h"

class Card : public ICard{
    private:
        std::string value;
        std::string suit;
        int num;
    public:
        std::string getRank();
        std::string getSuit();
        void setValue(int v);
        void setSuit(char s);
        void setSuit(std::string s);
        std::string getName();
        Card(int v, char s);
        /*Card operator = (Card const obj){
            Card res;
            bool check=true;
            res.setValue(obj.num);
            res.setSuit(obj.suit);
            
        }*/
        Card();
};

#endif