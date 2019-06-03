#include "pch.h"
#include "Node.h"
#include <iostream>

Node::~Node()
{
	std::cout << "~Node(" << _value << ")" << std::endl;
}

void Node::push_back(int value)
{
	if (next != nullptr)
		return next->push_back(value);
	next = std::make_shared<Node>(value);
	next->previous = this;
}
