#pragma once

#include <vector>
#include "VehiclePart.h"

class Vehicle
{
protected:
	std::vector<VehiclePart*> parts;
public:
	Vehicle();
	~Vehicle();

	void mount(VehiclePart *vehiclePart);
	void unmount(VehiclePart *vehiclePart);
};

