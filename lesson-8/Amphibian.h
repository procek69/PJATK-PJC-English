#pragma once

#include "Boat.h"
#include "Car.h"

enum terrain_mode { land, water };

/**
  * protected: in current class: this->Class::method();
  * public:    anywhere: this->Class::method();
 */
class Amphibian: protected Boat, protected Car
{
public:
	void move(terrain_mode);
	void mount(VehiclePart*);
	Amphibian();
	~Amphibian();
};

