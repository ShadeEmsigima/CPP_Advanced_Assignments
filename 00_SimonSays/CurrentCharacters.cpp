#include "CurrentCharacters.h"



CurrentCharacters::CurrentCharacters()
{
}


CurrentCharacters::~CurrentCharacters()
{
}

void CurrentCharacters::DisplayCharacters() {
	//add a character
	srand(time(NULL)); //makes it be diffirent every time

	//show it briefly
	charList += _rndmChar[rand() % 4];
	cout << "remember " << charList << endl;
}

bool CurrentCharacters::Compare(string playerAnswer) {
	
	//compare
	if (playerAnswer == charList) {
		cout << "Correct! :D" << endl;
		return true;
	}

	else {
		cout << "Wrong! Nawwww:'(" << endl;
		system("PAUSE");
		return false;
	}
}



