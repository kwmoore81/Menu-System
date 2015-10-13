#pragma once
int getNumValid(int min, int max)
{
	int select;
	do 
	{
		std::cout << "Enter a Valid Number (" << min << "," << max << "): ";
		std::cin >> select;
		
		std::cin.clear();
		std::cin.ignore(80, '\n');
		
		if (std::cin.fail() || select < min || select > max)
		{
			std::cout << "invalid entry." << std::endl;
		}
		else break;
	} while (true);
	return select;
}

void printFile();

void writeFile();

void clearFile();