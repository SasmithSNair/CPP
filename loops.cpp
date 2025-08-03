#include <iostream>
/*
Loops are used to repeat a block of statement
several times, we use for, while, and do-while loops
in C++; We'll see about built-in iterators later.

The for loop:
Syntax:
for (initialization; condition, increment/decrement)
{
	body of the loop
}

The while loop:
Syntax:
while (condition)
{
	body of the loop
}
PN: while loop only executes if the condition provided is true

The do-while loop:
Syntax:
do
{
	block of the loop
} while (condition);
*/
int main()
{
	// All the loops iterates 5 times
	// Example (for loop):
	for (int i = 0; i < 5; i++)
	{
		std::cout << "You are in loops.cpp!" << std::endl;
	}
	// Example (while loop)
	int count = 0;
	while (count < 5)
	{
		std::cout << "Body of while" << std::endl;
		count++; // Incrementing count
	}
	// Example (do-while loop)
	do
	{
		std::cout << "Variable i is decrementing!" << std::endl;
		count--;
	} while (count > 0);
	return 0;
}
