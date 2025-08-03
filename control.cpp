#include <iostream>
// continue, break, and return
/*
continue:
	=> Skips the part of loop.
break:
	=> Breaks out of the loop.
return:
	=> Returns the value from a function.
*/
int Add(int a, int b)
{
	int c = a + b;
	return c; // Breaks out of the function and returns the value in 'c'
}
int main()
{
	// Example (continue):
	std::cout << "Continue:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
		{
			continue; // Skips the rest of the code block and goes for the next iteration
		}
		std::cout << "Value of 'i' is: " << i << std::endl;
	}
	std::cout << "\nBreak:" << std::endl;
	for (int i = 0; i < 5; i++)
	{
		if (i == 3)
		{
			break; // Breaks out of loop entirely if i is equal to 3
		}
		std::cout << "Value of 'i' is: " << i << std::endl;
	}
	std::cout << "\nReturn:" << std::endl;
	int result = Add(7, 10);
	std::cout << "Result of Add(7, 10) is: " << result << std::endl;
	return 0;
}
