#pragma once
#include <vector>
#include <string>
#include "Student.h"

class StudentGroup
{
	std::vector<Student*> students;
	std::string name;
public:
	void add(Student*);
	void remove(Student*);
	StudentGroup(std::string);
	~StudentGroup();
};

