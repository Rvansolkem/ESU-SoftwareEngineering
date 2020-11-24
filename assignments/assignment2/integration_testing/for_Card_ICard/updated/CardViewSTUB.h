//carview stub
#ifndef CARDVIEWSTUB_H
#define CARDVIEWSTUB_H
#include "BMPSTUB.h" //used instead of cardImage
#include <string>
#include "ICardViewSTUB.h"
class CardView : public ICardView{
    private:
        BMP* view;
    public:
        CardView(int, int, bool);
        void write(const char* filename);
};
#endif