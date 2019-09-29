#pragma once
#include <iostream>
#include <string>

#include<random>// so I can randomize things
#include<time.h>
#include<windows.h> //so I can make the program SLEEP

using namespace std;

class CurrentCharacters
{
public:
	string charList;
	char _rndmChar[4] = { 'A','B','C','D' };

	CurrentCharacters();
	~CurrentCharacters();

	void DisplayCharacters();
	bool Compare( string playerAnswer);
};

