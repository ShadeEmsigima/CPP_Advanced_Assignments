#include "Round.h" //unclude all stuffies thats included in Round.h



Round::Round()
{
	
}


Round::~Round()
{
}

void Round:: StartRound(string playerName) {
	CurrentCharacters aComparison;
	outcome = true;

	while (outcome == true) {

		aComparison.DisplayCharacters();

		//remove after 1 sec
		Sleep(1000);
		system("CLS");

		//ask for input
		cout << "What did you see?" << endl;
		cin >> playerAnswer;

		//compare characters
		outcome = aComparison.Compare(playerAnswer);
	}
	
	//add my name and score to list of players and scores
	aHighScore.addPlayerData(playerName, aComparison.charList.length());
	aHighScore.displayDataAllPlayers();

	   
}
