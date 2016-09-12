#include <iostream>
using namespace std;

class Fish
{
public:
	virtual Fish* Clone() = 0;
	virtual void Swim() = 0;
};

class Tuna:public Fish
{
public:
	Fish* Clone()
	{
		return new Tuna(*this);
	}
	
	void Swim()
	{
		cout << "Tuna swims fast in the sea" << endl;
	}
};

class Carp: public Fish
{
	Fish* Clone()
	{
		return new Carp(*this);
	}
	
	void Swim()
	{
		cout << "Carp swims slow in the lake" << endl;
	}
};

int main()
{
	const int ARRAY_SIZE = 4;
	
	Fish* myFishes[ARRAY_SIZE] = {NULL};
	myFishes[0] = new Tuna();
	myFishes[1] = new Carp();
	myFishes[2] = new Tuna();
	myFishes[3] = new Carp();
	
	Fish* myNewFishes[ARRAY_SIZE];
	for (int Index = 0; Index < ARRAY_SIZE; ++Index)
		myNewFishes[Index] = myFishes[Index] -> Clone();
	
	//invoke a virtual method to check
	for (int Index = 0; Index < ARRAY_SIZE; ++Index)
		myNewFishes[Index] -> Swim();
	
	//memory cleanup
	for (int Index = 0; Index < ARRAY_SIZE; ++Index)
	{
		delete myFishes[Index];
		delete myNewFishes[Index];
	}
	
	return 0;
}