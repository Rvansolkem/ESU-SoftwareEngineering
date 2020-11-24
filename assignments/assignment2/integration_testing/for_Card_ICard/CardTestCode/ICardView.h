#ifndef ICARDVIEW_H
#define ICARDVIEW_H

class ICardView{
    public:
        virtual void write(const char*)=0;
};
#endif