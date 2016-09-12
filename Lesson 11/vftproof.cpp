#include <iostream>
using namespace std;

class SimpleClass
{
	int a, b;

public:
	void FuncDoSomething() {}
};

class Base
{
	int a, b;
	
public:
	virtual void FuncDoSomething() {}
};

int main()
{
	cout << "sizeof(SimpleClass) = " << sizeof(SimpleClass) << endl;
	cout << "sizeof(Base) = " << sizeof(Base) << endl;
	
	return 0;
}