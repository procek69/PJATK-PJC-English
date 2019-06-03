#pragma once
#include <memory>
class Node
{
	int _value;
	std::shared_ptr<Node> next;
	Node* previous;
public:
	Node(int value) : _value{ value }, next{ nullptr } {};
	~Node();
	void push_back(int);
};

