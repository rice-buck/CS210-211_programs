#include <vector>
#include <iostream>
#include "Deck.hpp"

class Hand{
public:
    //constructor
    Hand();

    //print hand 
    void printHand() const;
private:
    //stores cards in hand 
    std::vector<Card>handVector;

};

