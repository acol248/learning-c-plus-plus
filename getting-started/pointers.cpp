#include <iostream>

int number = 20;
int *numberPointer = &number;
int& numberReference = number;

int main()
{
  std::cout << "Value of number is " << number << std::endl;
  std::cout << "Address of number is " << numberPointer << std::endl;
  std::cout << "Value via pointer " << *numberPointer << std::endl;

  // change the value of number via the pointer
  *numberPointer = 30;
  std::cout << "New value of number is " << number << std::endl;

  std::cout << "Value of number via reference is " << numberReference << std::endl;

  // change the value of number via the reference
  numberReference = 40;

  std::cout << "New value of number is " << number << std::endl;

  return 0;
}