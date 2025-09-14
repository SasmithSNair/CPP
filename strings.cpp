#include <iostream>
#include <string>

/*
 * String is an array of characters, we can make use of char* or std::string
 * to make use of string datatype in C++. String datatype from STL have a lot
 * of built-in functions.
 */

int main()
{
	const char *str1 = "This is a C style way of declaring a string.";
	std::string str2 = "This is C++ style string!";
	std::cout << str1 << '\n' << str2 << '\n';
	/*
	 * There are multiple built-in functions in C++ strings like length, size, find, etc.
	 */
	// Example:
	std::cout << "The length of str2 is: " << str2.length() << '\n';
	return 0;
}

