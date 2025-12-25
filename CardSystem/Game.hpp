#include <iostream>
#include "Dealer.hpp"
#include "Deck.hpp"
#include "Player.hpp"
#pragma once

class Game {
public:
Game();

void intialDeal();

void playerTurn();

void dealerTurn();

void determineWinner();

void play();

private:
Deck deck;
Player player;
Dealer dealer;
};