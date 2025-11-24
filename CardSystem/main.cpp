#include "Deck.hpp"
#include <iostream>

int main(){
   //create Deck
   Deck deck1;

   //print ordered deck
   deck1.printDeck();

   //shuffle deck
   deck1.shuffleDeck();

   //print shuffled deck
   deck1.printDeck();

   return 0;
}

//add draw card and deal card method