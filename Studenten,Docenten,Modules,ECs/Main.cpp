/* - Print a list of modules, with students and teachers
- show total EC per student
- change EC of 1 module: print the list again
*/

//IM tryign to put things on vector list so that:
//modules can be assigned my random
//can keep track of who is assigned to what

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <time.h>
#include "Student.h"
#include "Teacher.h"
#include "Module.h"


int main()
{
	std::cout << "PREPERATIONS ====================================================" << std::endl;
	
	//make 3 modules on the heap, and add them to a vector
	std::vector<Module*> modules;
	Module* Python = new Module("Python"); Python->setEC(2); modules.push_back(Python);
	Module* HTML = new Module("HTML"); HTML->setEC(1); modules.push_back(HTML);
	Module* CPP = new Module("C++"); CPP->setEC(4); modules.push_back(CPP);
	//Print the modules that were saved
	std::cout << "Heap saved modules: " << std::endl;
	for (int i = 0; i < 3; i++) {
		std::cout << modules.at(i)->name << ", EC points: " << modules.at(i)->EC << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;

	//make 3 teachers on the heap, and assign them, add them to vector, print this.
	std::vector<Teacher*> teachers;
	Teacher* Valentijn = new Teacher("Valentijn"); Valentijn->assignTo(Python);  teachers.push_back(Valentijn);
	std::cout << "Heap saved teacher " << Valentijn->name << std::endl << "Assigned to: " << Valentijn->assignedTo << std::endl;
	Teacher* Ton = new Teacher("Ton"); Ton->assignTo(HTML); teachers.push_back(Ton);
	std::cout << "Heap saved teacher " << Ton->name << std::endl << "Assigned to: " << Ton->assignedTo << std::endl;
	Teacher* Edwin = new Teacher("Edwin"); Edwin->assignTo(CPP); teachers.push_back(Edwin);
	std::cout << "Heap saved teacher " << Edwin->name << std::endl << "Assigned to: " << Edwin->assignedTo << std::endl;
	

	std::cout << std::endl;

	std::vector<Student*> students;

	//ONE WAY OF GETTING RANDOM NUM:
	for (int i = 0; i < 10; i++) {
		//picking random pos on vector of modules to assign student to a random module
		//https://stackoverflow.com/questions/5008804/generating-random-integer-from-a-range
		int min = 0;
		int max = 2;
		int output = min + (rand() % static_cast<int>( max - min + 1));

	Student* nieuweStudent = new Student("Pietje Puk");
	nieuweStudent->assignTo(modules.at(output)); students.push_back(nieuweStudent);
	std::cout << "Heap saved " << nieuweStudent->name << ", assigned to module " << nieuweStudent->assignedTo << std::endl;
	}
	
	std::cout << std::endl;

	std::cout << "ASSIGNMENT ====================================================" << std::endl;
	std::cout << "1) Printing a list of modules and the ones assigned to it:" << std::endl<< std::endl;
	
	//-Print a list of modules, with students and teachers
	std::vector<Module*>::iterator it;
	std::vector<Teacher*>::iterator j = teachers.begin();
	std::vector<Student*>::iterator k = students.begin();

	for (it = modules.begin(); it < modules.end(); it++) {
		std::cout << (*it)->name << ": " << std::endl; //print out the current module
		for (j = teachers.begin(); j < teachers.end(); j++) {
			if ((*j)->assignedTo == (*it)->name) { //if the module the object is assigned to is the same were looking for, print it.
				std::cout << (*j)->name << " is assigned to " << (*j)->assignedTo << std::endl;
			for (k = students.begin(); k < students.end(); k++) {
				if ((*k)->assignedTo == (*it)->name) { //do the same for students
					std::cout << (*k)->name << ", is assigned to " << (*k)->assignedTo << std::endl;
				}
			}
			}
		}
		std::cout << std::endl;
	}

	std::cout << "2) Show total EC points per student:" << std::endl << std::endl;

	for (k = students.begin(); k < students.end(); k++) {
		std::cout << (*k)->name << "'s total EC points are " << (*k)->studentEC << std::endl;
	}


	std::cout << std::endl;
	std::cout << "3) Changing EC of one module, showing the list of EC points per student again:" << std::endl << std::endl;
	
	Python->setEC(10);
	std::cout << "Changed EC value of module python to 10:" << std::endl;
	for (k = students.begin(); k < students.end(); k++) {
		if ((*k)->assignedTo == Python->name) {
			(*k)->updateEC(Python);
		}
		std::cout << (*k)->name << "'s total EC points are " << (*k)->studentEC << std::endl;
	}

	std::cout << std::endl;
	std::cout << "4) Unassign a student from a module, and show the list again:" << std::endl << std::endl;

	//students.at(0)->assignTo(NULL);
	students.at(0)->unassign();

	for (k = students.begin(); k < students.end(); k++) {
		if ((*k)->assignedTo == Python->name) {
			(*k)->updateEC(Python);
		}
		std::cout << (*k)->name << "'s total EC points are " << (*k)->studentEC << std::endl;
	}

	std::cout << std::endl;
	system("PAUSE");
}

	//CODE THAT WAS NEVER USED
	////make 10 students on the heap
	////I tried a for loop to make new students, but failed
	//Student* s1 = new Student("Pietje 1"); s1->assignTo(Python);
	//std::cout << "Heap saved student " << s1->name <<std::endl << "Assigned to: " << s1->assignedTo << std::endl;
	//
	//Student* s2 = new Student("Pietje 2"); s2->assignTo(CPP);
	//std::cout << "Heap saved student " << s2->name << std::endl << "Assigned to: " << s2->assignedTo << std::endl;
	//
	//Student* s3 = new Student("Pietje 3"); s3->assignTo(Python);
	//std::cout << "Heap saved student " << s3->name << std::endl << "Assigned to: " << s3->assignedTo << std::endl;
	//
	//Student* s4 = new Student("Pietje 4"); s4->assignTo(HTML);
	//std::cout << "Heap saved student " << s4->name << std::endl << "Assigned to: " << s4->assignedTo << std::endl;
	//
	//Student* s5 = new Student("Pietje 5"); s5->assignTo(CPP);
	//std::cout << "Heap saved student " << s5->name << std::endl << "Assigned to: " << s5->assignedTo << std::endl;
	//
	//Student* s6 = new Student("Pietje 6"); s6->assignTo(Python);
	//std::cout << "Heap saved student " << s6->name << std::endl << "Assigned to: " << s6->assignedTo << std::endl;
	//
	//Student* s7 = new Student("Pietje 7"); s7->assignTo(CPP);
	//std::cout << "Heap saved student " << s7->name << std::endl << "Assigned to: " << s7->assignedTo << std::endl;
	//
	//Student* s8 = new Student("Pietje 8"); s8->assignTo(HTML);
	//std::cout << "Heap saved student " << s8->name << std::endl << "Assigned to: " << s8->assignedTo << std::endl;
	//
	//Student* s9 = new Student("Pietje 9"); s9->assignTo(HTML);
	//std::cout << "Heap saved student " << s9->name << std::endl << "Assigned to: " << s9->assignedTo << std::endl;
	//
	//Student* s10 = new Student("Pietje 10"); s10->assignTo(Python); //make student, assign student
	//std::cout << "Heap saved student " << s10->name << std::endl << "Assigned to: "<< s10->assignedTo << std::endl;

	/*int returnValue = 0;
	srand(time(NULL)*2);
	for (int i = 0; i < 2; i++) {
		returnValue += 10[std::rand() % 52];
	}*/
