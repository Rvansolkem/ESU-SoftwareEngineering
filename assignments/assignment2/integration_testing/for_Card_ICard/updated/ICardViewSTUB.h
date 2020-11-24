#ifndef ICARDVIEWSTUB_H
#define ICARDVIEWSTUB_H

class ICardView{
    public:
        virtual void write(const char*)=0;
};
#endif