//CIS108 Lab 5: Handling structs, enums, and unions

//include header files and libraries
#include <iostream>
#include <fstream>
#include <string>
#include "Song.h"
#include "MusicDB.h"

int main()
{
	string action;

	std::cout << "add  : Add a new song to the music database\n";
	std::cout << "list : List the songs in the music database\n";
	std::cout << "save : Save the music databse\n";
	std::cout << "help : Display this menu\n";
	std::cout << "exit : Exit this program\n";
	system("pause");
	return 0;
//	ofstream myfile("MusicDB.txt");
//	if (myfile.is_open())
//	{
//		myfile << "This is a line.\n";
//		myfile << "This is another line.\n";
//		myfile.close();

//	}
//	else
//	{
//		cout << "Unable to open file.";
//	}

//	string line;
//	ifstream thefile("MusicDB.txt");
//	if (thefile.is_open())
//	{
//		while (getline (thefile, line))
//		{
//			cout << line << "\n";
//		}
//		thefile.close();
//	}

//	else
//	{
//		cout << "Unable to open file.";
//	}
}

