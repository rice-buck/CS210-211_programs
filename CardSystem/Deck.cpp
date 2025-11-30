#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
#include <random>
#include <chrono>
#include "Deck.hpp"



   //Deck constuctor using intializer list
    Deck::Deck() : deckVector {
        // === Hearts ===
    {Card::Rank::Ace,   Card::Suit::Hearts},
    {Card::Rank::Two,   Card::Suit::Hearts},
    {Card::Rank::Three, Card::Suit::Hearts},
    {Card::Rank::Four,  Card::Suit::Hearts},
    {Card::Rank::Five,  Card::Suit::Hearts},
    {Card::Rank::Six,   Card::Suit::Hearts},
    {Card::Rank::Seven, Card::Suit::Hearts},
    {Card::Rank::Eight, Card::Suit::Hearts},
    {Card::Rank::Nine,  Card::Suit::Hearts},
    {Card::Rank::Ten,   Card::Suit::Hearts},
    {Card::Rank::Jack,  Card::Suit::Hearts},
    {Card::Rank::Queen, Card::Suit::Hearts},
    {Card::Rank::King,  Card::Suit::Hearts},

    // === Diamonds ===
    {Card::Rank::Ace,   Card::Suit::Diamonds},
    {Card::Rank::Two,   Card::Suit::Diamonds},
    {Card::Rank::Three, Card::Suit::Diamonds},
    {Card::Rank::Four,  Card::Suit::Diamonds},
    {Card::Rank::Five,  Card::Suit::Diamonds},
    {Card::Rank::Six,   Card::Suit::Diamonds},
    {Card::Rank::Seven, Card::Suit::Diamonds},
    {Card::Rank::Eight, Card::Suit::Diamonds},
    {Card::Rank::Nine,  Card::Suit::Diamonds},
    {Card::Rank::Ten,   Card::Suit::Diamonds},
    {Card::Rank::Jack,  Card::Suit::Diamonds},
    {Card::Rank::Queen, Card::Suit::Diamonds},
    {Card::Rank::King,  Card::Suit::Diamonds},

    // === Clubs ===
    {Card::Rank::Ace,   Card::Suit::Clubs},
    {Card::Rank::Two,   Card::Suit::Clubs},
    {Card::Rank::Three, Card::Suit::Clubs},
    {Card::Rank::Four,  Card::Suit::Clubs},
    {Card::Rank::Five,  Card::Suit::Clubs},
    {Card::Rank::Six,   Card::Suit::Clubs},
    {Card::Rank::Seven, Card::Suit::Clubs},
    {Card::Rank::Eight, Card::Suit::Clubs},
    {Card::Rank::Nine,  Card::Suit::Clubs},
    {Card::Rank::Ten,   Card::Suit::Clubs},
    {Card::Rank::Jack,  Card::Suit::Clubs},
    {Card::Rank::Queen, Card::Suit::Clubs},
    {Card::Rank::King,  Card::Suit::Clubs},

    // === Spades ===
    {Card::Rank::Ace,   Card::Suit::Spades},
    {Card::Rank::Two,   Card::Suit::Spades},
    {Card::Rank::Three, Card::Suit::Spades},
    {Card::Rank::Four,  Card::Suit::Spades},
    {Card::Rank::Five,  Card::Suit::Spades},
    {Card::Rank::Six,   Card::Suit::Spades},
    {Card::Rank::Seven, Card::Suit::Spades},
    {Card::Rank::Eight, Card::Suit::Spades},
    {Card::Rank::Nine,  Card::Suit::Spades},
    {Card::Rank::Ten,   Card::Suit::Spades},
    {Card::Rank::Jack,  Card::Suit::Spades},
    {Card::Rank::Queen, Card::Suit::Spades},
    {Card::Rank::King,  Card::Suit::Spades}
    } {
        std::cout << "====Creating " << deckVector.size() << " Cards====\n";
    }

    //prints deck vector
    void Deck::printDeck() const{
        for(const auto& cardInDeck : deckVector){
            cardInDeck.displayCard();
        }
    }
    
    //shuffle deck
    void Deck::shuffleDeck() {
        std::cout << "\n \n ====Shuffling Cards====\n\n";
        //Set up a random number generator using a time-based seed
        unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
        std::mt19937 rng(seed); // Mersenne Twister engine
        std::shuffle(deckVector.begin(), deckVector.end(), rng);
    }
    //takes card from deck 
    Card Deck::drawCard() {
        std::cout << "Card drawn from deck" << std::endl;
         Card topCard = deckVector.back();
         deckVector.pop_back();
         return topCard;
        }