#include "pch.h"
#include "Vehicle.h"
#include <algorithm>

Vehicle::Vehicle()
{
}


Vehicle::~Vehicle()
{
}

void Vehicle::mount(VehiclePart *vehiclePart)
{
	std::vector<VehiclePart*>::iterator position = std::find(parts.begin(), parts.end(), vehiclePart);
	if (position == parts.end()) // There is no such part yet
		parts.push_back(VehiclePart);
}

void Vehicle::unmount(VehiclePart *vehiclePart)
{
	std::vector<VehiclePart*>::iterator position = std::find(parts.begin(), parts.end(), vehiclePart);
	if (position != parts.end()) // There is an part
		parts.erase(position);
}
