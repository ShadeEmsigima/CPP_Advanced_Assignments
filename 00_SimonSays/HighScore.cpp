#include "HighScore.h"



HighScore::HighScore()
{
	//cout << "Your name is "<< playerName << endl;
	//*_playerName = playerName;
}


HighScore::~HighScore()
{
}

void HighScore::addPlayerData(string name, int score) {
	playerNames.push_back(name); //add current player to the list of players
	playerScore.push_back(score); //add current player's score to list of scores
}

void HighScore::displayDataAllPlayers() {
	system("CLS");
	cout << "Player scores: " << endl;
	for (int i = 0; i < playerNames.size() ; i++) {
		cout << playerNames[i] << "_____________________" << playerScore[i] << endl;
	}
	system("PAUSE");
}