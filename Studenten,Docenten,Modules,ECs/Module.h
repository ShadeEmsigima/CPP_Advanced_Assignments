#pragma once
#include <string>
class Module
{
public:
	std::string name;
	std::string assTeach;
	std::string assStud;
	int EC;

	Module(std::string givenName);
	~Module();

	void setEC(int givenEC);
	void showList();
};

