#include <vector>
#include <iostream>
#include "Hand.hpp"

Hand::Hand() : handVector {} {}

void Hand::printHand() const{
    for(const auto& cardInHand: handVector){
        cardInHand.displayCard();
    }
}

