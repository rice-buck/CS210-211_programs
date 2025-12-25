#include <iostream>
#include <string>
#include "Hand.hpp"
#pragma once

class Player{
    public:
    //default constructor
    Player();
    //contructor
    Player(std::string playerName);

    void addCard(const Card&);

    void showHand() const;

    void setName(std::string newName);

    std::string getName();

    int getHandValue();

    private:
    std::string name;
    Hand playerHand;
};