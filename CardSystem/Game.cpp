#include <iostream>
#include <string>
#include "Game.hpp"
#include "Deck.hpp"
#include "Player.hpp"
#include "Dealer.hpp"

Game::Game() {
    //create and shuffle deck
    deck.shuffleDeck();
    //set player name
    std::cout << "Enter Player Name: ";
    std::string playerName;
    std::cin >> playerName;
    player.setName(playerName);
    std::cout << "Hello " << player.getName() << "!" << std::endl;
}

void Game::intialDeal(){
    player.addCard(deck.drawCard());
    player.addCard(deck.drawCard());

    dealer.addCard(deck.drawCard());
    dealer.addCard(deck.drawCard());
    std::cout << "Two cards added to dealer's hand.\n" << "Two cards added to " <<player.getName() << "'s hand.\n";
}

    void Game::playerTurn(){
        //show hand and value 
        player.showHand();
        std::string input;

        //hit or stand
        while(player.getHandValue() < 21){
        std::cout << "Hand value: " << player.getHandValue() << std::endl;
        std::cout << "[h]it or [s]tand?" << std::endl;
        std::cin >> input;
        
        if (input == "h" || input == "hit"){
            std::cout << player.getName() << " hits\n";
            player.addCard(deck.drawCard());
            player.showHand();
        } else if (input == "s" || input == "stand"){
            std::cout << player.getName() << " stands\n";
            break;
        } else {
            std::cout << "Invalid input\n";
        }
    }
    if (player.getHandValue() > 21) {
        std::cout << "Bust!" << std::endl;
    } else {
        std::cout << "You stand with a value of " << player.getHandValue() << std::endl;
    }
}

void Game::dealerTurn(){


}

void Game::determineWinner(){


}

void Game::play(){


}
