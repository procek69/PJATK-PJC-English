#pragma once
#include "World.h"

class Thanos
{
public:
	static void destroy(World* world) {
		delete world;
	}
	Thanos();
	~Thanos();
};

