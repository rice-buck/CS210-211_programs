#include <string>

//card class
class Card{
public:

//Suit enum
enum class Suit {
    Diamonds,
    Spades,
    Clubs,
    Hearts
};

//Rank enum
enum class Rank{
    Ace,
    Two,
    Three,
    Four,
    Five,
    Six,
    Seven,
    Eight,
    Nine,
    Ten,
    Jack,
    Queen,
    King
};
//constructor
Card(Rank rank, Suit suit);

//getters
Suit getSuit() const;

Rank getRank() const;

//methods
void displayCard() const;

private:
//
    Suit suitValue;
    Rank rankValue;
    std::string suitName;
    std::string rankName;
};