#include "Card.hpp"
#include "Hand.hpp"
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <iostream>
#include <string>

class Deck{
    private:

    public:
    //constructor decleration to intialize vector
    Deck();

    //prints deck vector
    void printDeck() const;

    //shuffle deck 
    void shuffleDeck();

    void dealCard();

    //card vector stores 52 cards 
    std::vector<Card>deckVector;
};
