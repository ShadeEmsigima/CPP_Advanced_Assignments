#include "stdafx.h"
#include "Teacher.h"


Teacher::Teacher(std::string givenName)
{
	name = givenName;
	assignedTo = "not assigned";
}


Teacher::~Teacher()
{
}

void Teacher::assignTo(Module* chosenModule) {// assign it to a module
	assignedTo = chosenModule->name; //set the assigned module to the name of the Module obj the pointer points at
	//std::cout << "Assigned to "<<chosenModule->name; //DEBUG print out the name of the chosenModule
}
