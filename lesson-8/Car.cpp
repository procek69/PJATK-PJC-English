#include "pch.h"
#include "Car.h"
#include "VehiclePart.h"
#include <iostream>

void Car::drive()
{
	for (std::vector<VehiclePart*>::iterator it = parts.begin(); it != parts.end(); ++it)
	{
		if ((*it)->name == "engine")
		{
			std::cout << "Car is running" << std::endl;
			return;
		}
	}
	std::cout << "I do need an engine!" << std::endl;
}

Car::Car()
{
}


Car::~Car()
{
}
