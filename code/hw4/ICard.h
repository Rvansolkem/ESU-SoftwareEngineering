#ifndef ICARD_H
#define ICARD_H
#include <string> //this might have to be CardView.h

class ICard{

    public:
        virtual std::string getRank() = 0;
        virtual std::string getSuit() = 0;
        virtual std::string getName() = 0;
        protected:
            ICard& operator=(const ICard&){return *this;}
};


#endif