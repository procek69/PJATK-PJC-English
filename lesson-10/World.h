#pragma once
#include <vector>
#include <memory>
#include "Country.h"

class World
{
	std::vector<std::shared_ptr<Country>> countries;
public:
	World();
	~World();
};

