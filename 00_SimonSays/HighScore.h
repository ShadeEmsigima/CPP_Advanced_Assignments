#pragma once
#include <iostream>

#include <vector>
#include <string>


//This class keeps track of all the players and their scores in a vector list.
//1. save the player and their score. Make sure the score can be updated as long as the player is not game over yet.
//2. Once the player is game over, save the player's name and score into the list that keeps track of all previous players and scores
//3. then display the list of all players and their scores.

using namespace std; //makes sure you can use strings

class HighScore
{
private:
	//string *_playerName;

public:
	int score = 0;
	int *scoreP = &score;
	vector <string>playerNames;
	vector <int>playerScore;


	HighScore();
	~HighScore();
	void addPlayerData(string name, int score);
	void displayDataAllPlayers();
};