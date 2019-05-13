#include "pch.h"
#include "Car.h"
#include <iostream>

Car::Car()
{
}


Car::~Car()
{
}

void Car::drive()
{
	std::cout << "DRIVE" << std::endl;
}

void Car::crash()
{
	std::cout << "CRASH" << std::endl;
}
