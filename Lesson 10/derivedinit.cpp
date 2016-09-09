#include <iostream>
using namespace std;

class Fish
{
protected:
	bool FreshWaterFish; //accesible only to derived class
	
public:
	//Fish constructor
	Fish(bool IsFreshWater) : FreshWaterFish(IsFreshWater) {}
	
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
	Tuna() : Fish(false) {}
};

class Carp: public Fish
{
public:
	Carp(): Fish(true) {}
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
	
	//Uncomment line to see that protected members
	//are not accessible from outside of the class hierarchy
	//myLunch.FreshWaterFish = false;
	
	return 0;
}