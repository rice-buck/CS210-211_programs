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
    std::cout << "Card added to Hand" << std::endl;
    handVector.push_back(card);
}
