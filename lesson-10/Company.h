#pragma once
#include <vector>
#include <string>
#include "Country.h"

#ifndef Country_H_
#define Country_H_

class Country;
#include "Country.h"

class Company
{
	std::string name;
	std::vector<Country*> countries;
public:
	Company(std::string _name) : name(_name) {};
	~Company();
};

#endif