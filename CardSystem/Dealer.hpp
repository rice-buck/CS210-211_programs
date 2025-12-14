#include <iostream>
#include <string> 
#include "Hand.hpp"
#pragma once

class Dealer{
    public:
    //constructor
    Dealer();

    void addCard(const Card&);

    void showHand() const;
    
    void handValue();

    private:
    Hand dealerHand;
};