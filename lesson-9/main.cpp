#include "pch.h"
#include <iostream>
#include "Country.h"
#include "Student.h"
#include "StudentGroup.h"

std::ostream& operator<<(std::ostream &strm, Country &c) {
	return strm << "Country(" << c.get_population() << ")" << std::endl;
}

int main()
{
	// I
	Country country(1000000);
	country++;
	std::cout << "Population increased by 1. It is now: " << country.get_population() << std::endl;
	++country;
	std::cout << "Population increased by 1. It is now: " << country.get_population() << std::endl;
	std::cout << country;

	// II
	Student* s0 = new Student(0);
	StudentGroup* sg0 = new StudentGroup("Group A");
	StudentGroup* sg1 = new StudentGroup("Group B");
	sg0->add(s0);
	sg1->add(s0);
	delete s0;
}