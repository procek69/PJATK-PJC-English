#include "pch.h"
#include "Student.h"
#include "StudentGroup.h"
#include <iostream>

void Student::detach(StudentGroup *group)
{
	std::vector<StudentGroup*>::iterator position = std::find(groups.begin(), groups.end(), group);
	if (position != groups.end()) {
		groups.erase(position);
		return;
	}
}

Student::Student()
{
}

Student::Student(int s)
{
	this->s = s;
}


Student::~Student()
{
	std::cout << "~Student()" << std::endl;
	for (std::vector<StudentGroup*>::iterator it = groups.begin(); it != groups.end(); ++it)
	{
		(*it)->remove(this);
	}
}
