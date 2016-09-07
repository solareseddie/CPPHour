#include <iostream>
using namespace std;

//Function declaration (prototype)
double Area(double InputRadius, double Pi = 3.14); //Pi with default value_comp

int main()
{
	cout << "Enter radius: ";
	double Radius = 0;
	cin >> Radius;
	
	cout << "Pi is 3.14, do you wish to change this(y/n)? ";
	char ChangePi = 'n';
	cin >> ChangePi;
	
	double CircleArea = 0;
	if (ChangePi == 'y')
	{
		cout << "Enter new Pi: ";
		double NewPi = 3.14;
		cin >> NewPi;
		CircleArea = Area(Radius, NewPi);
	}
	else
		CircleArea = Area(Radius); //Ignore 2nd param, use default value
	
	//Call function "Area"
	cout << "Area is: " << CircleArea << endl;
	
	return 0;
}

//Function definitions don't specify default values again
double Area(double InputRadius, double Pi)
{
	return Pi*InputRadius*InputRadius;
}