#include "pch.h"
#include "Amphibian.h"


void Amphibian::move(terrain_mode terrain)
{
	switch (terrain)
	{
	case land:
		this->Car::drive();
		break;
	case water:
		this->Boat::sail();
		break;
	}
}

void Amphibian::mount(VehiclePart* part)
{
	this->Car::mount(part);
	this->Boat::mount(part);
}

Amphibian::Amphibian()
{
}


Amphibian::~Amphibian()
{
}
