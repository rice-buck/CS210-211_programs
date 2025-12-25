#include <vector>
#include <iostream>
#include "Card.hpp"
#pragma once
class Hand{
public:
    //constructor
    Hand();

    //print hand 
    void printHand() const;

    //add card to  Hand
    void addCard(const Card&);

    //stores cards in hand 
    std::vector<Card>handVector;

    //hand value 
    //void handValue();

    int getHandValue();
    
private:

};

