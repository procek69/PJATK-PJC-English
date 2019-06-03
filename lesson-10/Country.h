#pragma once
#include <string>
#include <vector>
#include <memory>
#include "Country.h"

#ifndef Company_H_
#define Company_H_

class Company;
#include "Company.h"

class Country
{
	std::string name;
	long population;
	std::vector<std::shared_ptr<Company>> companies;
public:
	Country(std::string _name, int _population) : name(_name), population(_population) {};
	Country &operator++();
	Country operator++(int);
	~Country();
	void add(Company*);
};
#endif
