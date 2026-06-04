#pragma once
#include <string>
enum CardNumber 
{
    Ace, Two, Three, Four, Five, Six, Seven, Eight, Nine, Ten, Jack, Queen, King, Number_Last
};

enum CardSuite
{
    Spade, Club, Diamond, Heart, Suite_Last
};

class Card
{
    public:
    Card() = default;
    Card(CardNumber, CardSuite);
    CardNumber getCardNumber();
    CardSuite getCardSuite();
    ~Card() = default;

    std::string convertNumberToString(CardNumber number);
    std::string convertSuiteToString(CardSuite suite);

    private:
    CardNumber cardNumber;
    CardSuite cardSuite;
};

Card::Card(CardNumber number, CardSuite suite)
{
   this->cardNumber = number;
   this->cardSuite = suite;
}

std::string Card::convertNumberToString(CardNumber number)
{
    const std::string stringRepOfNums[13] = {"Ace", "Two", "Three", "Four", "Five", "Six", "Seven",
    "Eight", "Nine", "Ten", "Jack", "Queen", "King"};

    return stringRepOfNums[static_cast<int>(number)];
}

std::string Card::convertSuiteToString(CardSuite suite)
{
    const std::string stringRepOfSuite[4] = {"Spade", "Club", "Diamond", "Heart"};

    return stringRepOfSuite[static_cast<int>(suite)];
}

CardNumber Card::getCardNumber()
{
    return this->cardNumber;
}

CardSuite Card::getCardSuite()
{
    return this->cardSuite;
}