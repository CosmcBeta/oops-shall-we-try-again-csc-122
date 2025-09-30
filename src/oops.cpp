#include "oops.hpp"

#include <iostream>

int tryAgain(int lowerBound, int upperBound, std::string prompt, std::string errorMsg)
{
    int val;
    std::cout << prompt << "\n";
    std::cin >> val;
    while (val < lowerBound || val > upperBound)
    {
        std::cout << errorMsg << "\n";
        std::cout << prompt << "\n";
        std::cin >> val;
    }

    return val;
}