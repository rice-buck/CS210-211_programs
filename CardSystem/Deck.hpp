#include "Card.hpp"
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <iostream>
#include <string>
#pragma once
class Deck{
    private:

    public:
    //constructor decleration to intialize vector
    Deck();

    //prints deck vector
    void printDeck() const;

    //shuffle deck 
    void shuffleDeck();

    //takes card from deck 
    Card drawCard();

    //card vector stores 52 cards 
    std::vector<Card>deckVector;
};
