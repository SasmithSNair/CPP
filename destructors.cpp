#include <iostream>

/*
 * Destructors in C++ does quite the opposite job of a constructor.
 * Basically, a destructor would be used to clean up stuffs.
 */

// Example:
class Alloc {
public:
	int *arr, index;
	Alloc() {
		arr = new int;
		index = 0;
	}
	Alloc(int size) {
		arr = new int[size];
		index = 0;
	}
	void add(int var) {
		arr[index++] = var;
	}
	void print() {
		for (int i = 0; i < index; i++) {
			std::cout << arr[i] << '\n';
		}
	}
	// A destructor begins with ~ followed by the name of the class
	~Alloc() {
		delete[] arr;
		arr = nullptr;
	}
};

int main()
{
	Alloc a; // The constructor is called by default.
	a.add(17);
	a.add(71);
	a.print();
	// The destructor is called at the end of the instance's scope.
	return 0;
}
