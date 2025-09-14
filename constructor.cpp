#include <iostream>

/* Constructor
 * In C++, generally, a constructor is a functions which runs when we make an
 * instance of a class which allows us to set up default things, which makes it
 * easier for us rather than making an other separate function for initialization.
 */

class Entity {
public:
	int a, b;
	// Constructor is exactly as the class name
	Entity(/* parameters are optional */) {
		// Set up necessities here
		a = 0, b = 0;
	}
	/* There can be more than one constructor but
	 * with different parameters
	 */
	Entity(int a, int b) {
		this->a = a, this->b = b;
	}
	void print() {
		std::cout << "a: " << a << " b: " << b << std::endl;
	}
};

int main()
{
	// By using the empty constructor
	Entity e1;
	e1.print();
	/* Output:
	 * a: 0 b: 0
	 */
	 
	// By passing arguements
	Entity e2(17, 71);
	e2.print();
	/* Output:
	 * a: 17 b: 71
	 */
	return 0;
}
