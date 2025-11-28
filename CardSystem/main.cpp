#include "Deck.hpp"
#include <iostream>

int main(){
   //create Deck
   Deck deck1;

   //shuffle deck
   deck1.shuffleDeck();

   //print shuffled deck
   deck1.printDeck();

   //create Hand
   Hand hand1;

   //deal top card to hand
   hand1.dealCard();

   //print hand
   hand1.printHand();

   return 0;
}

//add draw card and deal card method