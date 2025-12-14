#include "Deck.hpp"
#include "Hand.hpp"
#include "Player.hpp"
#include "Dealer.hpp"
#include "Card.hpp"
#include <iostream>

int main(){
   //create Deck
   Deck deck1;

   //shuffle deck
   deck1.shuffleDeck();
   
   //create player
   Player player1("Player 1");
   std::cout << "Player: " << player1.getName() << std::endl;
   
   //add three cards to players hand
   player1.addCard(deck1.drawCard());
   player1.addCard(deck1.drawCard());
   player1.addCard(deck1.drawCard());

   //display players hand
   player1.showHand();

   player1.handValue();

   //create dealer
   Dealer dealer1;
   std::cout << "Dealer created" << std::endl;

   dealer1.addCard(deck1.drawCard());

   dealer1.showHand();

   dealer1.handValue();

   return 0;
}


