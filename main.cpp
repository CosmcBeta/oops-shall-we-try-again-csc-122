#include <iostream>

#include "src/oops.hpp"

int main() 
{
  constexpr int LOWER_BOUND = 1;
  constexpr int UPPER_BOUND = 100;
  constexpr int DEFAULT_VAL = 50;
  int value = tryAgain(LOWER_BOUND, UPPER_BOUND, "Please enter a value 1-100 or \"default\" for default value or \"exit\" to quit", "Your value is invalid", DEFAULT_VAL);
  // Showing how to handle the case inwhich the user exits the loop
  if (value >= LOWER_BOUND)
  {
    std::cout << "You're value is " << value << "!" << std::endl;
  }
}