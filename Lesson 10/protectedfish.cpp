#include <iostream>
using namespace std;

class Fish
{
protected:
	bool FreshWaterFish; //accesible only to derived classes
	
public:
	void Swim()
	{
		if (FreshWaterFish)
			cout << "Swims in lake" << endl;
		else
			cout << "Swims in sea" << endl;
	}
};

class Tuna: public Fish
{
public:
	Tuna()
	{
		FreshWaterFish = false; //set base class protected member
	}
};

class Carp: public Fish
{
public:
	Carp()
	{
		FreshWaterFish = false;
	}
};

int main()
{
	Carp myLunch;
	Tuna myDinner;
	
	cout << "Getting my food to swim" << endl;
	
	cout << "Lunch: ";
	myLunch.Swim();
	cout << "Dinner: "; 
	myDinner.Swim();
	
	//uncomment line to see protected members
	//are not accesible fdrom outside class hierarchy
	//myLunch.FreshWaterFish = false;
	
	return 0;
}