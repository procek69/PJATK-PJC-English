#include "pch.h"
#include "Faculty_student_group.h"


Faculty_student_group::Faculty_student_group(int size, faculty _faculty)
	: Student_group(size), division(_faculty) {}


Faculty_student_group::~Faculty_student_group()
{
}
