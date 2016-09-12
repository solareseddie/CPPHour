#include <iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal constructor" << endl;
	}
	
	//sample method
	int Age;
};

class Mammal:public virtual Animal
{
};

class Bird:public virtual Animal
{
};

class Reptile:public virtual Animal
{
};

class Platypus:public Mammal, public Bird, public Reptile
{
public:
	Platypus()
	{
		cout << "Platypus constructor" << endl;
	}
};

int main()
{
	Platypus duckBilledP;
	
	//No compile error as there is only one Animal::Age
	duckBilledP.Age = 25;
	
	return 0;
}