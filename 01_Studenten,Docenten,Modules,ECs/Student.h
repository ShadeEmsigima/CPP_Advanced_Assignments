#pragma once
#include <iostream>
#include <string>
#include "Module.h" //use this if in assignTo() type us module, not string. [WORKS]

class Student
{
private:
public:
	std::string name;
	std::string assignedTo;
	int studentEC;

	Student(std::string givenName);
	~Student();

	void updateEC(Module* updatedModule);
	void assignTo(Module* chosenModule);
	void unassign();
};

