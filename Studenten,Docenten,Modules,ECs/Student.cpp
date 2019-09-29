#include "stdafx.h"
#include "Student.h"


Student::Student(std::string givenName)
{
	name = givenName;
	assignedTo = "not assigned";
}


Student::~Student()
{
}

void Student::updateEC(Module* updatedModule){ // show EC points of this student
	studentEC = updatedModule->EC;
}

void Student::assignTo(Module* chosenModule) { //assign it to a module
	assignedTo = chosenModule->name; //set the assigned module to the name of the Module obj the pointer points at
	//std::cout << "Assigned to " << chosenModule->name; // DEBUG print out the name of the chosenModule

	//update the EC points:
	studentEC = chosenModule->EC;
}

void Student::unassign() {
	studentEC = 0;
	assignedTo = "not assigned";
	//std::cout << "called unassign()";
}
