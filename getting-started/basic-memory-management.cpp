#include <iostream>

int main()
{
  int *ptr = new int(42);

  std::cout << "Value: " << *ptr << std::endl;

  delete ptr;
  ptr = nullptr;
}