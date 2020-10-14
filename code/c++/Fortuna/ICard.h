#pragma once
#ifndef ICard_h
#define ICard_h
#include <string>
#include "BMP.h"
class ICard{
    private:
        std::string suit;
        std::string rank;
        bool faceUp;
        bool selected;
    public:
        ICard();
        ICard(std::string suit, std::string rank);
        ~ICard();
        std::string getRank();
        std::string getSuit();
        void setSuit(std::string s);
        void setRank(std::string r);
        bool isFaceUp();
        bool isSelected();
        void select();
        void face_Up();
        BMP getCardView();
};

#endif