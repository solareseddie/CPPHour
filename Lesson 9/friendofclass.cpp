#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	string Name;
	int Age;
	
	friend void DisplayAge(const Human& Person);
	
public:
	Human(string InputName, int InputAge)
	{
		Name = InputName;
		Age = InputAge;
	}
};

void DisplayAge(const Human& Person)
{
	cout << Person.Age << endl;
}

int main()
{
	Human FirstMan("Adam", 25);
	cout << "Accesing private member Age via friend: ";
	DisplayAge(FirstMan);
	
	return 0;
}