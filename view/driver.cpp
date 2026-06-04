#include <iostream>
#include <C:\Users\bened\C++_repo\BlackJack\models\cards.cpp>

int main(void)
{
    std::cout << "Hello, Welcome to BlackJack" << std::endl;

    Card card;

    CardNumber number = CardNumber::Queen;
    CardSuite suite = CardSuite::Club;
    std::cout << card.convertNumberToString(number) << std::endl;
    std::cout << card.convertSuiteToString(suite) << std::endl;
} 