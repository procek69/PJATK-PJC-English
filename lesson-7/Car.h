#pragma once
#include <string>

enum brand {
	A, B, C
};

class Car
{
private:
	std::string name;
	brand manufacturer;
	std::string owner;
	int fuel;
public:
	Car();
	~Car();
	void drive();
	void crash();
};

