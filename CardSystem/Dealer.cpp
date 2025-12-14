#include <iostream>
#include "Dealer.hpp"

//constructor definition
Dealer::Dealer() {}

void Dealer::addCard(const Card& c){
    dealerHand.addCard(c);
}

void Dealer::showHand() const {
    dealerHand.printHand();
}
