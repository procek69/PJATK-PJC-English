#include "pch.h"

#include <iostream>
#include <memory>

#include "Item.h"
#include "Node.h"
#include "World.h"
#include "Country.h"
#include "Company.h"
#include "Thanos.h"

int main()
{
	// Task 0, Task 1
	std::unique_ptr<Item> smart_item(new Item());
	// Task 2
	Node node(20);
	node.push_back(50);
	node.push_back(100);
	// Task 3
	World *w = new World();
	Country *usa = new Country("USA", 327200000);
	Country *pl = new Country("PL", 38430000);
	Company *starkIndustries = new Company("STARK Industries");
	Company *optimus = new Company("Optimus");
	usa->add(starkIndustries);
	pl->add(optimus);
	Thanos::destroy(w);
}