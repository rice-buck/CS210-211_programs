#include <iostream>
#include <string>
#include "Player.hpp"

//constructor definition
Player::Player(std::string playerName)
    : name(playerName) {} //intializer list

void Player::addCard(const Card& c){
    playerHand.addCard(c);
}

void Player::showHand() const {
    playerHand.printHand();
}

std::string Player::getName(){
    return name;
}

//hit or stand