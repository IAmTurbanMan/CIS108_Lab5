#include <iostream>
#include <fstream>
#include <string>
#include "MusicDB.h"
#include "Song.h"

using namespace std;

void addSong(songs::_Song& aSong)
{
	cout << "Enter song title: ";
	getline(cin, aSong.title);
	cout << "Enter artist: ";
	getline(cin, aSong.artist);
	cout << "Enter album: ";
	getline(cin, aSong.album);
	cout << "Enter track number: ";
	cin >> aSong.track;
	cout << "Enter release year: ";
	cin >> aSong.releaseYear;
	cout << "Enter genre: ";


}

