#include "Card.hpp"
#include "Deck.hpp"
#include <iostream>

int main(){
   //constructor
   Card card1(Card::Rank::Three, Card::Suit::Diamonds);

   card1.displayCard();

   
   return 0;
}