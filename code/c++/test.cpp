#include "Deck.cpp"
#include <iostream>
//using namespace std;

int main(){
    //testing deck and card
    //make deck
    Deck d;
     
    //out put cards in order
    std::cout << "deck before shuffling\n";
    for(int i=0;i<52;i++){
        std::cout << d.deal().getName() <<std::endl;
    }

    return 0;
}