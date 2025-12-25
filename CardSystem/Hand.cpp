#include <vector>
#include <iostream>
#include "Hand.hpp"
#include "Deck.hpp"

Hand::Hand() : handVector {} {}

void Hand::printHand() const{
    std::cout << "===Printing Hand===" << std::endl;
    for(const auto& cardInHand: handVector){
        cardInHand.displayCard();
    }
}

void Hand::addCard(const Card& card){
    handVector.push_back(card);
}

int Hand::getHandValue(){
    int handValueSummed = 0;
    for (int i = 0; i < handVector.size(); i++){
        if (handVector[i].getValue() == 1 && handValueSummed <= 11){
            handValueSummed += 11;
        } else {
        handValueSummed += handVector[i].getValue();
        }
    }
    return handValueSummed;
}