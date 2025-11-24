#include "Card.hpp"
#include "Deck.hpp"
#include <iostream>

int main(){
   //constructor
   Card card1(Card::Rank::Three, Card::Suit::Diamonds);
   std::cout << Card::rankToString(card1.getRank()) << " of " << Card::suitToString(card1.getSuit()) << std::endl;

   Card card2(Card::Rank::Ace, Card::Suit::Hearts);
   std::cout << Card::rankToString(card2.getRank()) << " of " << Card::suitToString(card2.getSuit()) << std::endl;

   return 0;
}