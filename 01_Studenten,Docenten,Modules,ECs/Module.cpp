#include "stdafx.h"
#include "Module.h"


Module::Module(std::string givenName)
{
	name = givenName;
	EC = 0;
}


Module::~Module()
{
}

void Module::setEC(int givenEC) { //set the EC points for this module
	EC = givenEC;
}

void Module::showList() { //show this module's name,assigned teacher and assigned students

}