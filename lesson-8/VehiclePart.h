#pragma once
#include <string>

class VehiclePart
{
public:
	std::string name;
	VehiclePart();
	VehiclePart(std::string n) : name(n) {};
	~VehiclePart();
};