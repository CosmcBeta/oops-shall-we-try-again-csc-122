#include "oops.hpp"

#include <iostream>

int tryAgain(int lowerBound, int upperBound, std::string prompt, std::string errorMsg, int defaultValue)
{
    int val;
    std::string userInput;
    std::cout << prompt << "\n";
    std::cin >> userInput;

    if (userInput == "default")
    {
        return defaultValue;
    }
    else if (userInput == "exit")
    {
        return lowerBound - 1;
        /*
        I chose to return a value that is outside of the bounds since I would like the user of the functoin to decide if the 
        program gets terminted if the user exits the loop or if they would like to throw an error or just go back to the 
        part of the program before this function was called.

        I would've used std::optional so that I could return nothing and have the user work with that but chose against this
        since we haven't learned it in this class yet.

        Doing lowerBound - 1 allows the return value to always be outside the bounds unlike if this was -1 since that could
        be in the bounds in certain cases
        */
    } else {
        val = std::stoi(userInput);
    }


    while (val < lowerBound || val > upperBound)
    {
        std::cout << errorMsg << "\n";
        std::cout << prompt << "\n";
        std::cin >> userInput;

        if (userInput == "default")
        {
            return defaultValue;
        }
        else if (userInput == "exit")
        {
            return lowerBound - 1;
        }
        else
        {
            val = std::stoi(userInput);
        }
    }

    return val;
}