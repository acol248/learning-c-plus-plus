/**
 * @brief Write a C++ program with the following:
 * 1. A function increment_by_pointer that takes an int* and adds 10 to the value it points to.
 * 2. A function increment_by_reference that takes an int& and adds 20 to the value it references.
 * 3. In main, declare an integer my_data = 5.
 * 4. Call the pointer function on my_data.
 * 5. Call the reference function on my_data.
 * 6. Print the final value of my_data.
 */

#include <iostream>

/**
 * A function that increments the pointed value by 10
 * 
 * @param ptr Pointer to an integer to be incremented
 */
void increment_by_pointer(int* ptr)
{
  if (ptr != nullptr) {
    *ptr += 10;
  }
}

/**
 * A function that increments the referenced value by 20
 * 
 * @param ref Reference to an integer to be incremented
 */
void increment_by_reference(int& ref)
{
  ref += 20;
}

int main() 
{
  int value = 5;

  // output initial value
  std::cout << "Initial value: " << value << std::endl;

  increment_by_pointer(&value);

  // output value after pointer increment
  std::cout << "After increment_by_pointer: " << value << std::endl;

  increment_by_reference(value);

  // output value after reference increment
  std::cout << "After increment_by_reference: " << value << std::endl;

  return 0;
}