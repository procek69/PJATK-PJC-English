#include "pch.h"
#include "Student_group.h"


Student_group::Student_group(int size)
{
	students = new Student[size];
}


Student_group::~Student_group()
{
	delete[] students;
}
