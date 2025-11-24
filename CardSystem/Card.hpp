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

static std::string suitToString(Suit s);

static std::string rankToString(Rank r);

private:
    Suit suitValue;
    Rank rankValue;
};

//do i really want to use enum if i want a card constructor??