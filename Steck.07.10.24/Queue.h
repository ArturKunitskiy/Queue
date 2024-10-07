#pragma once
class Queue
{
	int* data = nullptr;
	int size = 0;
public:
	int pop();
	int top();
	void push(int value);
	int IsEmpty();
	void print();
	~Queue();
};