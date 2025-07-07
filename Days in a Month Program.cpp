// Days in a Month Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Things didn't get updated on github, this comments serves as a change to commit

#include <iostream>

int main()
{
	int month, year;

	std::cout << "Enter a month (1-12) \n";
	std::cin >> month;

	std::cout << "Enter a year \n";
	std::cin >> year;

	if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
	{
		//if (month == 1)
		std::cout << "31 Days \n";
	}
	else if (month == 4 || month == 6 || month == 9 || month == 11)
	{
		std::cout << "30 Days \n";
	}
	else if (month == 2)
	{
		if (((year % 100) == 0 && (year % 400) == 0) || ((year % 4) == 0 && (year % 100) != 0))
		{
			std::cout << "29 Days \n";
		}
		else
		{
			std::cout << "28 Days \n";
		}
	}
	else
	{
		std::cout << "Type a number between 1-12 \n";
	}
		return 0;

	
}

