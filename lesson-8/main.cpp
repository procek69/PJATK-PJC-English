#include "pch.h"
#include <iostream>
#include "Amphibian.h"

int main()
{
	Amphibian amphibian;
	VehiclePart harpoon;
	harpun.name = "harpoon";
	amphibian.mount(&harpoon);
	
	// I. There is harpoon, but there is no engine
	amphibian.move(woda);
	amphibian.move(lad);

	// II. Adding an engine
	amphibian.mount(new VehiclePart("engine"));
	amphibian.move(lad);


}