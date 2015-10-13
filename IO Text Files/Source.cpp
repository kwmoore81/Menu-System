#include <iostream>
#include <fstream>
#include"Header.h";



void printFile()
{
	std::fstream fin;
	fin.open("MyLog.txt", std::ios_base::out | std::ios_base::in);
			
	if (fin.is_open())
	{
		fin.getline("MyLog.txt", 128);
	}

}

void writeFile()
{
	std::fstream fout;
	fout.open("MyLog.txt", std::ios_base::out | std::ios_base::app);
	char input[128];
	
	if (fout.is_open())
	{
		fout >> input;

		fout << input;

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
