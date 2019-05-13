#pragma once
#include "Student_group.h"

enum faculty
{
	databases, network, mobile, backend, cloud
};

class Faculty_student_group: public Student_group
{
private:
	faculty division;
public:
	Faculty_student_group(int,faculty);
	~Faculty_student_group();
};

