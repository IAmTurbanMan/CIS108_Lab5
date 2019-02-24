//CIS108 Lab 5: Handling structs, enums, and unions

//include header files and libraries
#include <iostream>
#include <fstream>
#include <string>
#include "Song.h"
#include "MusicDB.h"

int main()
{
//	std::cout << "add  : Add a new song to the music database\n";
//	std::cout << "list : List the songs in the music database\n";
//	std::cout << "save : Save the music databse\n";
//	std::cout << "help : Display this menu\n";
//	std::cout << "exit : Exit this program\n";

	
	Song a_song
	{
		"Green River",
		"Creedence Clearwater Revival",
		"Green River",
		1,
		1969,
		a_song.Rock
	};

	std::ofstream myfile("MusicDB.txt");
	if (myfile.is_open())
	{
		myfile << "Song  : " << a_song.title << "\n";
		myfile << "Artist: " << a_song.artist << "\n";
		myfile << "Album : " << a_song.album << "\n";
		myfile << "Track : " << a_song.track << "\n";
		myfile << "Year  : " << a_song.releaseYear << "\n";
		myfile << "Genre : " << a_song.genre << "\n";
		myfile.close();

	}
	else
	{
		std::cout << "Unable to open file.";
	}

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

