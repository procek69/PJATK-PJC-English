#include "pch.h"
#include "Country.h"
#include <iostream>

Country& Country::operator++()
{
	++this->population;
	return *this;
}

Country Country::operator++(int)
{
	++(*this);
	return *this;
}

Country::~Country()
{
	std::cout << "~Country();" << std::endl;
}

void Country::add(Company *company)
{
	this->companies.push_back(std::shared_ptr<Company>(company));
}
