#pragma once
#include <iostream>
#include <string>
#include <vector>

#include "CurrentCharacters.h"
#include "HighScore.h"

/*A c++ class that represents the ‘main loop’ of the game: 
so the one that starts the game, and processes the input of the user*/

using namespace std;

class Round
{
public: //kind of like your table of contents
	string playerAnswer;
	bool outcome = true;
	HighScore aHighScore;
	
	Round();
	~Round();
	
	void StartRound(string playerName);

};

