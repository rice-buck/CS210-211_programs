#include "Card.hpp"
#include <vector>
#include <algorithm>
#include <random>
#include <chrono>
#include <iostream>
#include <string>

class Deck{
    private:
    //card vector stores 52 cards 
    std::vector<Card>deckVector;

    
    public:
    //constructor decleration to intialize vector
    Deck();

    //prints deck vector
    void printDeck() const;

    //shuffle deck 
    void shuffleDeck() ;

};
