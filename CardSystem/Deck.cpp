#include <vector>
#include <string>
#include <iostream>
#include "Deck.hpp"
#include "Card.hpp"

   //stores 52 Cards 
    std::vector<Card>deckVector = {
        
    };

    //prints deck vector
    void Deck::printDeck(){
        for(const auto& deck : deckVector){
            deck.displayCard();
        }
    }