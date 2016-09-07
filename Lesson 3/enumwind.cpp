#include <iostream>
using namespace std;

enum CardinalDirections
{
	North = 25,
	South,
	East,
	West
};

int main()
{
	cout << "Displaying directions and their symbolic values" << endl;
	cout << "North:  " << North << endl;
	cout << "South: " << South << endl;
	cout << "East: " << East << endl;
	cout << "West: " << West << endl;
	
	CardinalDirections WindDirection = South;
	cout << "Variable WindDirection = " << WindDirection << endl;
	
	return 0;
}