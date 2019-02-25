#pragma once
#include <iostream>
#include <string>


namespace structure
{

	typedef struct _Song
	{
		char title[64];
		char artist[64];
		char album[64];
		uint8_t track;
		uint16_t releaseYear;
		enum genre
		{
			Blues = 0,
			Country,
			Electronic,
			Folk,
			HipHop,
			Jazz,
			Latin,
			Pop,
			Rock
		} genre;
	} Song;
}