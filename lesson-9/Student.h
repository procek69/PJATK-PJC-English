#pragma once
#include <vector>

class StudentGroup;

class Student
{
	int s; // i.e. s00000
public:
	std::vector<StudentGroup*> groups;
	void detach(StudentGroup*);
	Student();
	Student(int);
	~Student();
};

