//carview stub
#ifndef CARDVIEW_H
#define CARDVIEW_H
#include "BMP.h" //used instead of cardImage
#include <string>
#include "ICardView.h"
class CardView : public ICardView{
    private:
        BMP* view;
    public:
        CardView(int, int, bool);
        void write(const char* filename);


};
#endif