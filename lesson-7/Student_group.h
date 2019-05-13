#pragma once
#include <string>

struct Student {
	int index;
	std::string name;
};

class Student_group
{
private:
	Student* students;
public:
	Student_group(int);
	~Student_group();
};

