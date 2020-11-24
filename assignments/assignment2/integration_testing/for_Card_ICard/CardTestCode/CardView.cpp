#include "CardView.h"

CardView::CardView(int r, int s, bool faceUp){
    int32_t w=100,h=200;
    uint32_t x=0,y=0,w1,h1,b=0,g=1,red=0,a=0;
    view=new BMP(w,h);
    if(faceUp){
        //if its face up we fill a region in the top left
        w1=10;
        h1=20;
        view->fill_region(x,y,w1,h1,b,g,red,a);
    }
    else{
        //if not face up fill whole card
        w1=100;
        h1=200;
        view->fill_region(x,y,w1,h1,b,g,red,a);
    }
}

void CardView::write(const char* filename){
    view->write(filename);
}