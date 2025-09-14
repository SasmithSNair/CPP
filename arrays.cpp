#include <iostream>
#include <array>

/*
 * Arrays are sequence of similar datatype which can be accessed via indeces.
 *
 * Syntax:
 * datatype variable_name[size];
 *
 * Index of any array starts with 0.
 */


int main()
{
	int array[6];
	for (int i = 0; i < 5; i++) {
		array[i] = i + 1;
	}
	array[5] = 0;
	
	// printing out the array;
	std::cout << "Printing with for loop:\n";
	for (int  j = 0; j < 5; j++) {
		std::cout << array[j] << '\n';
	}
	
	// printing with a reference:
	std::cout << "Printing with pointer:\n";
	int *ref = array;
	while (*ref) {
		std::cout << *ref++ << '\n';
	}
	
	// array from C++ STL
	/*
	 * Syntax:
	 * std::array<datatype, size> variablename;
	 */
	std::cout << "Printing C++ STL array via for-each loop:\n";
	std::array<int, 2> another = {17, 71};
	for (const int &i : another) {
		std::cout << i << '\n';
	}
	return 0;
}
