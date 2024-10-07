#include <iostream>
#include "Queue.h"
using namespace std;

int main()
{
	Queue obj1;
	obj1.push(2);
	obj1.push(3);
	obj1.push(4);
	obj1.push(5);
	while (!obj1.IsEmpty())
	{
		cout << obj1.pop() << ' ';
	}
}