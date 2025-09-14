#include <iostream>

/* Enum is a set of integer values
 * which helps increase modularity
 * than raw naming by int.
 *
 * Syntax:
 * enum Foo {
 * var1, var2, ..., varn
 * };
 * 
 * By default, the var1 stores the value
 * of 0 and the value gets incremented
 * by 1 to the others in the same
 * sequence.
 */

// Example:
enum test {
	A, B, C
};

int main()
{
	std::cout << A << '\n';
	std::cout << B << '\n';
	std::cout << C << '\n';
	/*
	 * Output:
	 * 0
	 * 1
	 * 2
	 *
	 * Naming a variable of the type 'test':
	 */
	test num = C;
	std::cout << num << '\n';
	/*
	 * Output:
	 * 2
	 * In this case, num is simply an integer but of type 'test'
	 * not 'int'. This makes a more safer type binding allowing
	 * only the values in 'test' get stored in the type 'test'.
	 */	
	return 0;
}
