#include "pch.h"
#include "World.h"
#include <iostream>

World::World()
{
}


World::~World()
{
	countries.clear();
	std::cout << "~World();" << std::endl;
}
