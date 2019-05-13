#include "pch.h"
#include "Boat.h"
#include <iostream>

void Boat::sail()
{
	for (std::vector<VehiclePart*>::iterator it = parts.begin(); it != parts.end(); ++it)
	{
		if ((*it)->name == "harpoon")
		{
			std::cout << "Boat is sailing" << std::endl;
			return;
		}
	}
	std::cout << "I need a harpoon!" << std::endl;
}

Boat::Boat()
{
}

Boat::~Boat()
{
}
