#include <iostream>
/*
Functions are declared like:
<return type> <function name>(arguements, ...)
{
	body of the function
	return ...; (no return if it is a void function)
}
*/

// Example (non-void):
int Multiply(int a, int b)
{
	return a * b;
}

// Example (void):
void Greet(const std::string& name) {
	std::cout << "Hello, " << name << "!" << std::endl;
}
int main()
{
	int result = Multiply(2, 5); // Calling the function and storing in a variable as it is a non-void function
	std::cout << "Result of multiplication: " << result << std::endl;
	Greet("Human Being"); // Calling the Greet() function, no assigning to a variable as it is a void function
	return 0;
}
