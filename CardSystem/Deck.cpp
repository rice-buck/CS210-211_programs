#include <vector>
#include <string>
#include <iostream>
#include "Deck.hpp"
#include "Card.hpp"

void Deck::printDeck(){
    for(const auto& card : deckVector)
        std::cout << Card::rankToString(Card::card.getRank());
}