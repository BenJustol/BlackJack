#pragma once
#include <C:\Users\bened\C++_repo\BlackJack\models\cards.cpp>
#include <vector>
#include <iostream>

class Deck
{
    public:
    Deck();
    ~Deck() = default;
    std::string toString();

    private:
    std::vector<Card> listOfCards;
};

Deck::Deck()
{
    for(CardSuite i = CardSuite::Spade; i < CardSuite::Suite_Last; i = CardSuite(i + 1))
    {
        for(CardNumber j = CardNumber::Ace; j < CardNumber::Number_Last; j = CardNumber(j + 1))
        {
            listOfCards.push_back(Card(j, i));
        }
    }
}

std::string Deck::toString()
{
    for(std::vector<Card>::iterator it = listOfCards.begin(); it != listOfCards.end(); it++)
    {
        std::cout << it->convertNumberToString(it->getCardNumber()) << " " << it->convertSuiteToString(it->getCardSuite()) << std::endl;
    }
    return "";
}

