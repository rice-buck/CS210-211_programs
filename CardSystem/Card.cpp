#include "Card.hpp"
#include <iostream>
#include <string>

//constructor with enums as parameters
Card::Card(Rank rank, Suit suit) 
    : rankValue(rank), suitValue(suit) {
    switch (suit) {
    case Suit::Diamonds: 
        suitName = "Diamonds";
        break;
    case Suit::Clubs: 
        suitName = "Clubs";
        break;
    case Suit::Hearts: 
        suitName = "Hearts";
        break;
    case Suit::Spades: 
        suitName = "Spades";
        break;
    throw std::invalid_argument("Unkown suit");
    }
    switch (rank) {
    case Rank::Ace:
        rankName = "Ace";
        break;
    case Rank::Two:
        rankName = "Two";
        break;
    case Rank::Three:
        rankName = "Three";
        break;
    case Rank::Four:
        rankName = "Four";
        break;
    case Rank::Five: 
        rankName = "Five";
        break;
    case Rank::Six:
        rankName = "Six";
        break;
    case Rank::Seven:
        rankName = "Seven";
        break;
    case Rank::Eight:
        rankName = "Eight";
        break;
    case Rank::Nine: 
        rankName = "Nine";
        break;
    case Rank::Ten: 
        rankName = "Ten";
        break;
    case Rank::Jack: 
        rankName = "Jack";
        break;
    case Rank::Queen: 
        rankName = "Queen";
        break;
    case Rank::King: 
        rankName = "King";
        break;
    default: 
        throw std::invalid_argument("Unkown Rank");
    }
}
 
//methods 
Card::Suit Card::getSuit() const {
    return suitValue;
}

Card::Rank Card::getRank() const {
    return rankValue;
}

void Card::displayCard() const {
    std::cout << rankName << " of " << suitName << std::endl;   
}


