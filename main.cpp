#include <iostream>

#include "src/oops.hpp"

int main() 
{
  int value = tryAgain(1, 100, "Please enter a value 1-100", "Your value is invalid");
  std::cout << "You're value is " << value << "!" << std::endl;
}