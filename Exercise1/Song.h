#pragma once
#include <iostream>
#include <string>

typedef struct _Song
{
	char title[64];
	char artist[64];
	char album[64];
	uint16_t track;
	uint32_t releaseYear;
	typedef enum _genre
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