#pragma once
#include "Student_group.h"
class Student_group_with_tutor: public Student_group
{
private:
	std::string teacher_name;
public:
	Student_group_with_tutor(int, std::string);
	~Student_group_with_tutor();
};

