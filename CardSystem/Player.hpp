#include <iostream>
#include <string>
#include "Hand.hpp"
#pragma once

class Player{
    public:
    //contructor
    Player(std::string playerName);

    void addCard(const Card&);

    void showHand() const;

    std::string getName();

    bool hitOrStand();

    private:
    std::string name;
    Hand playerHand;

};