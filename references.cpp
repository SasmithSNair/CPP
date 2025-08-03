#include <iostream>
/*
reference is an extension of pointers.
Syntax:
<datatype>& <variablename> = <othervariable>
*/
void change_name_normal(std::string name);
void change_name_reference(std::string& name);
int main()
{
	int a = 16;
	int& ref = a; // Here ref is like an alias of variale 'a'
	/* ref is not considered as another variable by the compiler
		changing ref changes 'a' by default */
	std::cout << "Value of ref: " << ref << std::endl;	// Value of ref is 16;
	ref++; // Incrementing ref by 1
	std::cout << "Value of a a after incrementing ref: " << a << std::endl;	// Value of a is 17 now;
	a += 54;
	std::cout << "Value of ref after adding 54 to a: " << ref << std::endl; // Value of ref is 71 now;
	// reference can also be used in functions; Say I have a string:
	std::string name = "Human"; // and calling a functions to change it via normal parameter:
	change_name_normal(name);
	std::cout << name << std::endl; // no change even after modifying it in the function!
	// now with a reference parameter
	change_name_reference(name);
	std::cout << name << std::endl; // name has changed!
	return 0;
}
void change_name_normal(std::string name) {
	/* here name becomes a local variable
		resulting in not affecting the main string */
	name = "Hello, " + name + "!";
}
void change_name_reference(std::string& name) {
	/* here name is the reference to the string
		in the main function, therefore the
		modification here would appear in the
		main function also */
	name = "Hello, " + name + "!";
}
