#include <iostream>
#include <fstream>
#include <string>
#include "MusicDB.h"
#include "Song.h"

using namespace std;
metadata::Song aSong;

void addSong()											//function to add a song to the database
{
	cout << "\n" << "Enter song title: ";
	cin.getline(aSong.title, 64);						//input into the title of the aSong struct
	cout << "Enter artist: ";
	cin.getline(aSong.artist, 32);						//input into artist
	cout << "Enter album: ";
	cin.getline(aSong.album, 64);						//input into album
	cout << "Enter track number: ";
	cin >> aSong.track;									//input into track
	cout << "Enter release year: ";
	cin >> aSong.releaseYear;							//input into  release year
	cout << " Blues\n" << " Country\n" << " Electronic\n" << " Folk\n" << " Hip Hop\n" << " Jazz\n" << " Latin\n" << " Pop\n" << " Rock\n";
	cout << "Choose a genre: ";

	string genreString;
	
	while (true)
	{
		cin >> genreString;

		//a series of if statements to read a string and input the string into the genre field of the struct.
		//I hope this is how to do it

		if (genreString == "Blues" || genreString == "blues")
		{
			aSong.genre = aSong.Blues;
			break;
		}

		else if (genreString == "Electronic" || genreString == "electronic")
		{
			aSong.genre = aSong.Electronic;
			break;
		}

		else if (genreString == "Country" || genreString == "country")
		{
			aSong.genre = aSong.Country;
			break;
		}

		else if (genreString == "Folk" || genreString == "folk")
		{
			aSong.genre = aSong.Folk;
			break;
		}

		else if (genreString == "Hip Hop" || genreString == "hip hop" || genreString == "Hip hop")
		{
			aSong.genre = aSong.HipHop;
			break;
		}

		else if (genreString == "Jazz" || genreString == "jazz")
		{
			aSong.genre = aSong.Jazz;
			break;
		}

		else if (genreString == "Latin" || genreString == "latin")
		{
			aSong.genre = aSong.Latin;
			break;
		}

		else if (genreString == "Pop" || genreString == "pop")
		{
			aSong.genre = aSong.Pop;
			break;
		}

		else if (genreString == "Rock" || genreString == "rock")
		{
			aSong.genre = aSong.Rock;
			break;
		}

		else
		{
			cout << "Please enter a genre from the list above.";
		}
	}
}

void saveSong(string database)
{
	ofstream outFile;

	outFile.open(database, ios::out | ios::app);
	outFile << "Title : " << aSong.title << "\n";
	outFile << "Artist: " << aSong.artist << "\n";
	outFile << "Album : " << aSong.album << "\n";
	outFile << "Track : " << aSong.track << "\n";
	outFile << "Year  : " << aSong.releaseYear << "\n";

	if (aSong.genre == 0)
	{
		outFile << "Genre : Blues\n";
	}

	if (aSong.genre == 1)
	{
		outFile << "Genre : Country\n";
	}

	if (aSong.genre == 2)
	{
		outFile << "Genre : Electronic\n";
	}

	if (aSong.genre == 3)
	{
		outFile << "Genre : Folk\n";
	}

	if (aSong.genre == 4)
	{
		outFile << "Genre : Hip Hop\n";
	}

	if (aSong.genre == 5)
	{
		outFile << "Genre : Jazz\n";
	}

	if (aSong.genre == 6)
	{
		outFile << "Genre : Latin\n";
	}

	if (aSong.genre == 7)
	{
		outFile << "Genre : Pop\n";
	}

	if (aSong.genre == 8)
	{
		outFile << "Genre : Rock\n";
	}
	outFile << "\n";
	outFile.close();
}

void listSong(string database)
{
	ifstream inFile(database);
	string line;
	while (getline(inFile, line))
	{
		cout << line << "\n";
	}
}

void menu()
{
	cout << "add  : add a song to the database\n";
	cout << "list : list the songs in the database\n";
	cout << "save : save the songs to the database\n";
	cout << "menu : display this menu\n";
	cout << "x    : exit the program\n";
}