#include "pch.h"
#include "Student_group_with_tutor.h"


Student_group_with_tutor::Student_group_with_tutor(int size, std::string teacher_name)
	: Student_group(size)
{
	this->teacher_name = teacher_name;
}


Student_group_with_tutor::~Student_group_with_tutor()
{
}
