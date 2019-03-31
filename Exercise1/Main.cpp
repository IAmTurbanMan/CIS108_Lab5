//CIS108 Lab 5: Handling structs, enums, and unions

//include header files and libraries
#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>
#include "Song.h"
#include "MusicDB.h"

using namespace std;
using namespace metadata;

int main()
{	
	programLoad("MusicDatabase.txt");

	Song aSong;

	while (true)
	{
		menu();
		cout << "\n" << "enter selection: ";
		string selection;
		cin >> selection;
		transform(selection.begin(), selection.end(), selection.begin(), ::tolower);

		cout << "\n";
		cin.ignore();

		if (selection == "add")
		{
			cout << "add song to the database.\n";
			addSong();
		}

		if (selection == "save")
		{
			cout << "save song to the database.\n";
			saveSong(aSong, "MusicDatabase.txt");
		}

		if (selection == "list")
		{
			cout << "list songs in the database.\n";
			listSong();
		}

		if (selection == "menu")
		{
			menu();
		}

		if (selection == "clear")
		{
			string yesOrNo;
			transform(yesOrNo.begin(), yesOrNo.end(), yesOrNo.begin(), ::tolower);
			cout << "Are you sure you want to clear the database? Y/N: ";
			cin >> yesOrNo;

			if (yesOrNo == "y")
			{
				clearSong("MusicDatabase.txt");
				cout << "Database cleared.\n";
			}

			else if (yesOrNo == "n")
			{
				continue;
			}
		}

		if (selection == "x")
		{
			break;
		}
	}


	
	
//	metadata::Song a_song
//	{
//		"Green River",
//		"Creedence Clearwater Revival",
//		"Green River",
//		1,
//		1969,
//		a_song.Rock
//	};
//
//	std::ofstream myfile("MusicDB.txt");
//	if (myfile.is_open())
//	{
//		myfile << "Song  : " << a_song.title << "\n";
//		myfile << "Artist: " << a_song.artist << "\n";
//		myfile << "Album : " << a_song.album << "\n";
//		myfile << "Track : " << a_song.track << "\n";
//		myfile << "Year  : " << a_song.releaseYear << "\n";
//		if (a_song.genre == 8)
//		{
//			myfile << "Genre : Rock" << "\n";
//		};
//		
//		myfile.close();
//
//	}
//	else
//	{
//		std::cout << "Unable to open file.";
//	}
//
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

