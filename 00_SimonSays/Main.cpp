#include <iostream>
#include <string>
#include <conio.h> //used for _getch(); to wait for user input

#include "Round.h" //make sure main knows Round.h
//#include "HighScore.h"

using namespace std;

int main() {
	bool tryAgain = true;
	Round aRound;

	while (tryAgain == true) {
		
		string playerName;

		system("CLS");
		//Ask player name
		cout << "What is your name?" << endl;
		cin >> playerName;
		//string *currentPlayerNameP = &playerName;
		cout << "Welcome to Simon Says, " + playerName + "!" << endl;


		//HighScore currentPlayer(*currentPlayerNameP);

		cout << "Press any key to continue";

		_getch(); //waits for user input (requries #include <conio.h>)
		system("CLS");
		aRound.StartRound(playerName);


		system("CLS");
		char blah;
		cout << "Enter 'e' to stop playing." << endl;
		cin >> blah;
		
		if (blah == 'e') {
			tryAgain = false;
		}
	}
}

//next time you start setting up high score list and put the things I wrote in main to the high score class if they belong there