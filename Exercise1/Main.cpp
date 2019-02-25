//CIS108 Lab 5: Handling structs, enums, and unions

//include header files and libraries
#include <iostream>
#include <fstream>
#include <string>
#include "Song.h"
#include "MusicDB.h"

using namespace std;

int main()
{
	cout << "add  : Add a new song to the music database\n";
	cout << "list : List the songs in the music database\n";
	cout << "save : Save the music databse\n";
	cout << "help : Display this menu\n";
	cout << "exit : Exit this program\n";
	cout << "\n";
	cout << "Please make a choice: ";

	cin >> string operation;




	
	
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
		if (a_song.genre == 8)
		{
			myfile << "Genre : Rock" << "\n";
		};
		
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

