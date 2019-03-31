#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>
#include "MusicDB.h"
#include "Song.h"

using namespace std;

metadata::Song aSong;

vector <metadata::Song> mySongs;

void programLoad(string fileName)
{
	metadata::Song aSong;
	ifstream musicDatabase;
	mySongs.clear();
	char ch;
	
	musicDatabase.open(fileName, ios::in | ios::binary);
	while (musicDatabase.is_open() && musicDatabase.peek() != EOF)
	{
		musicDatabase.read((char*)& aSong, sizeof(aSong));
		mySongs.push_back(aSong);
	}
	musicDatabase.close();
}

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
	cout << "Choose a genre: ";							//list genres

	string genreString;
	
	while (true)										
	{
		getline (cin, genreString);						//read a whole line of input
		transform(genreString.begin(), genreString.end(), genreString.begin(), ::tolower); //convert the string genreString to lowercase


		//a series of if statements to read a string and input the string into the genre field of the struct.
		
		
		if (genreString == "blues")
		{
			aSong.genre = aSong.Blues;
			break;
		}

		else if (genreString == "electronic")
		{
			aSong.genre = aSong.Electronic;
			break;
		}

		else if (genreString == "country")
		{
			aSong.genre = aSong.Country;
			break;
		}

		else if (genreString == "folk")
		{
			aSong.genre = aSong.Folk;
			break;
		}

		else if (genreString == "hip hop" || genreString == "hiphop")
		{
			aSong.genre = aSong.HipHop;
			break;
		}

		else if (genreString == "jazz")
		{
			aSong.genre = aSong.Jazz;
			break;
		}

		else if (genreString == "latin")
		{
			aSong.genre = aSong.Latin;
			break;
		}

		else if (genreString == "pop")
		{
			aSong.genre = aSong.Pop;
			break;
		}

		else if (genreString == "rock")
		{
			aSong.genre = aSong.Rock;
			break;
		}
	}

  	mySongs.push_back (aSong);
}

void saveSong(metadata::Song& aSong, string fileName)
{

	ofstream musicDatabase;
	musicDatabase.open(fileName, ios::out | ios::binary);
	auto vectorCount = mySongs.begin();
	while (vectorCount != mySongs.end())
	{
		metadata::Song aSong = *vectorCount;
		musicDatabase.write((char*)&aSong, sizeof(aSong));
		vectorCount++;
	}
}

void listSong()
{
	int vectorCount = 0;
	vector <metadata::Song>::iterator songCount;
	metadata::Song aSong;

	for (songCount = mySongs.begin(); songCount < mySongs.end(); songCount++)
	{
		aSong = *songCount;
		cout << "#" << vectorCount + 1 << "\n";
		cout << "Title : " << aSong.title << "\n";
		cout << "Artist: " << aSong.artist << "\n";
		cout << "Album : " << aSong.album << "\n";
		cout << "Track : " << aSong.track << "\n";
		cout << "Year  : " << aSong.releaseYear << "\n";
		if (aSong.genre == 0)
			cout << "Genre : Blues\n";
		if (aSong.genre == 1)
			cout << "Genre : Country\n";
		if (aSong.genre == 2)
			cout << "Genre : Electronic\n";
		if (aSong.genre == 3)
			cout << "Genre : Folk\n";
		if (aSong.genre == 4)
			cout << "Genre : Hip Hop\n";
		if (aSong.genre == 5)
			cout << "Genre : Jazz\n";
		if (aSong.genre == 6)
			cout << "Genre : Latin\n";
		if (aSong.genre == 7)
			cout << "Genre : Pop\n";
		if (aSong.genre == 8)
			cout << "Genre : Rock\n";
		vectorCount++;
	}
}

void clearSong(string fileName)
{
	mySongs.clear();			// clear the vector
	fstream musicDatabase;
	musicDatabase.open(fileName, ios::out | ios::trunc);
	musicDatabase.close();
}

void menu()
{
	cout << "add  : add a song to the database\n";
	cout << "list : list the songs in the database\n";
	cout << "save : save the songs to the database\n";
	cout << "clear: clear the song database\n";
	cout << "menu : display this menu\n";
	cout << "x    : exit the program\n";
}