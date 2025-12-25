#include <iostream>
#include <string>
#include "Player.hpp"
#include "Deck.hpp"

//default constructor 
Player::Player() {}
//constructor definition
Player::Player(std::string playerName)
    : name(playerName) {} //intializer list

void Player::addCard(const Card& c){
    playerHand.addCard(c);
}

void Player::showHand() const {
    playerHand.printHand();
}
void Player::setName(std::string newName){
    name = newName;
}
std::string Player::getName(){
    return name;
}

int Player::getHandValue(){
    return playerHand.getHandValue();
}

