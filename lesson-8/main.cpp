#include "pch.h"
#include <iostream>
#include "Amphibian.h"

int main()
{
	Amphibian amphibian;
	VehiclePart harpoon;
	harpoon.name = "harpoon";
	amphibian.mount(&harpoon);
	
	// I. There is harpoon, but there is no engine
	amphibian.move(water);
	amphibian.move(land);

	// II. Adding an engine
	amphibian.mount(new VehiclePart("engine"));
	amphibian.move(land);
}