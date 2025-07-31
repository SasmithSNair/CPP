#include <iostream>
int main()
{
  /* Helps you store data of various types */
  /* Declaration:
    <Datatype> <VariableName> = <Value>;
  */
  // Example:
  int variable = 8; // Here 'int' is the integer datatype, 'variable' is the variable name choosen, and 8 is the value assigned.
  std::cout << variable << std::endl;
  // Here variable is 'signed' meaning it can be negetive or positive.
  // To make it store only positive integers, we can used the 'signed' keywords before the 'int'.
  // Example:
  unsigned int usd_int = 1771; // an unsigned int!
  std::cout << usd_int << std::endl;
  char character = 'A'; // A character, stores all ASCII values, consumes only 1 bytes of memory.
  std::cout << character << std::endl;
  // A float or double variable (stores decimal values)
  float decimal = 3.14f; // Add 'f' at the end as it is a float!
  std::cout << decimal << std::endl;
  double pi = 3.141592654; // double consumes 8 bytes, it is able to store larger value than a float!
  std::cout << pi << std::endl;
  // bool datatype, stores 0 (false) or 1 (true)
  bool is_learning_cpp = true; // consumes 1 byte
  std::cout << is_learning_cpp << std::endl;
  /* Use the sizeof(); operator to print out the
  size of a variable */
  // Example:
  std::cout << "Size of 'variable': " << variable << std::endl;
  // That's all for the basic primitive datatype!
  return 0;
}
