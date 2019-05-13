#include <cmath>
#include "pch.h"
#include "Square.h"

Square::Square()
{
	length = 1;
}

Square::Square(int length)
{
	this->length = length;
}

double Square::diagonal()
{
	return length * std::sqrt(2);
}