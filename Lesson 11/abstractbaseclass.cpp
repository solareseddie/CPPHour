#include <iostream>
using namespace std;

class Fish
{
public:
	//define a pure virtual function Swim
	virtual void Swim() = 0;
};

class Tuna:public Fish
{
public:
	void Swim()
	{
		cout << "Tuna swims fast in the sea!" << endl;
	}
};

class Carp:public Fish
{
	void Swim()
	{
		cout << "Carp swims slow in the lake!" << endl;
	}
};

class Koi:public Fish
{
	void Swim()
	{
		cout << "I don't know shit about Koi, but Victori told me to add one." << endl;
	}
};

void MakeFishSwim(Fish& inputFish)
{
	inputFish.Swim();
}

int main()
{
	//Fish myFish; //Fails, cannot instantiate an ABC
	Carp myLunch;
	Tuna myDinner;
	Koi myVicky;
	
	MakeFishSwim(myLunch);
	MakeFishSwim(myDinner);
	MakeFishSwim(myVicky);
	
	return 0;
}