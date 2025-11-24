#include "Card.hpp"
#include <iostream>
#include <string>

//constructor with enums as parameters
Card::Card(Rank rank, Suit suit) 
    : rankValue(rank), suitValue(suit) {}

Card::Suit Card::getSuit() const {
    return suitValue;
}

Card::Rank Card::getRank() const {
    return rankValue;
}
//releates each enum value to a string
std::string Card::suitToString(Suit s) {
    switch (s) {
    case Suit::Diamonds: return "Diamonds";
    case Suit::Clubs: return "Clubs";
    case Suit::Hearts: return "Hearts";
    case Suit::Spades: return "Spades";
    default: return "Unkown Suit";
    }
}
//releates each enum value to a string
std::string Card::rankToString(Rank r) {
    switch (r) {
    case Rank::Ace:return "Ace";
    case Rank::Two:return "Two";
    case Rank::Three:return "Three";
    case Rank::Four:return "Four";
    case Rank::Five: return "Five";
    case Rank::Six:return "Six";
    case Rank::Seven:return "Seven";
    case Rank::Eight:return "Eight";
    case Rank::Nine: return "Nine";
    case Rank::Ten: return "Ten";
    case Rank::Jack: return "Jack";
    case Rank::Queen: return "Queen";
    case Rank::King: return "King";
    default: return "Unkown Rank";
    }
}