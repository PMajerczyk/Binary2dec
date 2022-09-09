#include <iostream>
#include <math.h>

int main()
{
	std::cout << "Hello\n";
	std::string number;
	std::string choice;
	bool run = false;
	bool work = true;
	int result = 0;
	int size;
	int i = 0;

	while (work == true)
	{
		std::cout << "Enter a binary number\n";
		std::cin >> number;
		size = number.length();
		do
		{
			result += (number[size - 1] - 48) * pow(2, i);
			++i;
			--size;
		} while (size > 0);
		std::cout << "The number is:\t" << result << "\n";
	    i = 0;
		result = 0;
		size = 0;

		do
		{
			std::cout << "Continue ?\n";
			std::cin >> choice;

			if (choice == "Yes")
			{
				work = true;
				run = true;
			}
			else if (choice == "No")
			{
				work = false;
				run = true;
				std::cout << "Thank you :)\n";
			}
			else
			{
				std::cout << "Incorrect entry\n";
				run = false;
			}
		} 
		while (run == false);	
	}
	system("pause");
}