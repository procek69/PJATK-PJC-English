#pragma once
#include <iostream>
class Country
{
	int population;
public:
	Country(int);
	~Country();
	int get_population();
	Country& operator++();
	Country operator++(int);
};

