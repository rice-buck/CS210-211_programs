#include "Card.hpp"
#include <vector>
class Deck{
    private:
    //stores 52 Cards 
    std::vector<Card>deckVector(2, Card(Card::Rank::Four, Card::Suit::Hearts));
    

    public:
    //prints deck vector
    void printDeck();

};
