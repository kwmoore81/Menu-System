#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include"Header.h"



int main()
{
	while (true)
	{
		std::cout << "Pick something: Display, Write, Clear, Exit ";
		switch (getNumValid(1, 4))
		{
		case 1: printFile(); break;
		case 2: writeFile(); break;
		case 3: clearFile(); break;
		case 4: return 0;
		}
		std::cout << std::endl;
		system("cls");

	}
	
}
void printFile()
{
	

	std::fstream fin;
	fin.open("MyLog.txt", std::ios_base::out | std::ios_base::in);
	char input[128];
	while (fin.getline(input, 128))
	{
		std::cout << input << std::endl;

		system("pause");
		fin.close();
	}
}

void writeFile()
{
	std::fstream fout;
	fout.open("MyLog.txt", std::ios_base::out | std::ios_base::app);
	char input[128];

	if (fout.is_open()) 
	{
		std::cin.getline(input, 128);	// accepts user input and puts it into a buffer
		fout << input << std::endl;	// write to the file
		fout.flush();	// flush the write buffer, writing everything we haven't
		fout.close();	// close the file stream

	}
}

void clearFile()
{
	std::fstream file;
	file.open("MyLog.txt", std::ios_base::out);
	if (file.is_open())
	{

	}
	file.close();
}
