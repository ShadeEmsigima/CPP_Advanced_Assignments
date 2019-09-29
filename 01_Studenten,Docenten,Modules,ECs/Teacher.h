#pragma once
#include <iostream>
#include <string>
#include "Module.h"

class Teacher
{
private:
public:
	std::string name;
	std::string assignedTo;

	Teacher(std::string givenName);
	~Teacher();

	void assignTo(Module* chosenModule);
};

