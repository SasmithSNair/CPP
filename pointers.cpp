#include <iostream>
#include <cstring>
/*
A pointer is an integer which stores the
memory address of a variable it is pointing to.
Syntax:
<datatype> *<variablename> = &<othervariable>
*/
int main()
{
	// assigning a ptr to nothing
	int* ptr = nullptr;
	int var = 17;
	ptr = &var; // assigning var's memory address to ptr
	std::cout << "Address before changing: " << ptr << std::endl;
	/* PN: Types are a bit meaningless in pointers as
		the memory address is just an integer */
	// read and write to ptr
	// dereferencing a ptr
	*ptr = 71;
	std::cout << "Address after changing: " << ptr << std::endl;
	/* they share same memory address as we are changing the value
		in the address not the address itself */
	// creating variable in heap
	char* buffer = new char[8];	// allocated 8 bytes of memory in heap
	std::memset(buffer, 'S', 8);	// setting those 8 bytes to 0
	char** cptr = &buffer;		// a double ptr is a ptr to another ptr
	std::cout << *cptr << std::endl;
	delete[] buffer;		// deleting the head memory
	return 0;
}
