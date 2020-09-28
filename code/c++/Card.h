#pragma once
#include <string>
#ifndef Card_h
#define Card_h


class Card{
    private:
        std::string value;
        std::string suit;
        int num;
    public:
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
        ~Card();
};

#endif