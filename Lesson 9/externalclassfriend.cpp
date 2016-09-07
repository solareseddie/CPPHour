#include <iostream>
#include <string.h>
using namespace std;

class Human
{
private:
	string Name;
	int Age;
	
	friend class Utility;
	
public:
	Human(string InputName, int InputAge)
	{
		Name = InputName;
		Age = InputAge;
	}
};

class Utility
{
public:
	static void DisplayAge(const Human& Person)
	{
		cout << Person.Age << endl;
	}
};

int main()
{
	Human FirstMan("Adam", 25);
	cout << "Accesing private member Age via friend class: ";
	Utility::DisplayAge(FirstMan);
	
	return 0;
}