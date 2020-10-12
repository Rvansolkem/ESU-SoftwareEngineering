#include "ICard.h"
//sets boolanes and nothing else. returns will return null
ICard::ICard(){
    //do onthing?
    selected=false;
    faceUp=false;
}

ICard::ICard(std::string rank,std::string suit){
    setSuit(suit);
    setRank(rank);
    selected=false;
    faceUp=false;
}

void ICard::setSuit(std::string s){suit=s;}

void ICard::setRank(std::string r){rank=r;}

std::string ICard::getRank(){return rank;}

std::string ICard::getSuit(){return suit;}

bool ICard::isFaceUp(){return faceUp;}

bool ICard::isSelected(){return selected;}

//relies on the BMP.h created
//does not currently have any sort of real image creation along lines of cards
BMP ICard::getCardView(){
    //for now an empty bitmap
    BMP empty(200, 100);

    //modify pixel data
    int channels = empty.bmp_info_header.bit_count / 8;
    for(int y=20; y<200; ++y){
        for(int x=50; x<150; ++x){
            empty.data[channels * (y * empty.bmp_info_header.width + x) + 0] = 0;  //B
            empty.data[channels * (y * empty.bmp_info_header.width + x) + 1] = 0;  //G
            empty.data[channels * (y * empty.bmp_info_header.width + x) + 2] = 255;//R 
            if(channels == 4){
                empty.data[channels * (y * empty.bmp_info_header.width * x) + 3] = 255; //A
            }           
        }
    }
    //above will fill a red rectangluar region
}