#include "pch.h"
#include "Country.h"


Country::Country(int population)
{
	this->population = population;
}

Country::~Country()
{
}

int Country::get_population()
{
	return this->population;
}

Country & Country::operator++()
{
	this->population++;
	return *this;
}

Country Country::operator++(int)
{
	++(*this);
	return *this;
}
