#include <iostream>
/*
The if - else statement:
Syntax:
if (condition)
{
	if block (considered as the 'true' block)
}
else
{
	the else block
}

We can further add conditions using the else if block;
Syntax:
if (condition)
{
	statement
}
else if(condition)
{
	statement
}
else
{
	statement
}
*/
int main()
{
	// Example; to check if a number is even or odd
	int num = 5;
	if (num % 2 == 0)
	{
		std::cout << "Even" << std::endl;
	}
	else
	{
		std::cout << "Odd" << std::endl;
	}
	// Example for multiple conditions, say to find if a number is positive, negetive or zero
	if (num > 0)
	{
		std::cout << "Positive" << std::endl;
	}
	else if (num < 0)
	{
		std::cout << "Negetive" << std::endl;
	}
	else
	{
		std::cout << "Zero" << std::endl;
	}
	// PN: Conditions always return or are of boolean datatype
	return 0;
}
