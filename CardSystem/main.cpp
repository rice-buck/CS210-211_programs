#include "Deck.hpp"
#include "Hand.hpp"
#include "Player.hpp"
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

   return 0;
}


