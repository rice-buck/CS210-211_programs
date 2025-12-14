#include <iostream>
#include "Dealer.hpp"

//constructor definition
Dealer::Dealer() {}

void Dealer::addCard(const Card& c){
    std::cout << "Dealer hit" << std::endl;
    dealerHand.addCard(c);
}

void Dealer::showHand() const {
    dealerHand.printHand();
}

void Dealer::handValue(){
    dealerHand.handValue();
}