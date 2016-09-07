#include <iostream>
using namespace std;

const double Pi = 3.14159;

//Declaration contains two parameters
double SurfaceArea(double Radius, double Height);

int main()
{
	cout << "Enter the radius of the cylinder: ";
	double InRadius = 0;
	cin >> InRadius;
	cout << "Enter the height of the cylinder: ";
	double InHeight = 0;
	cin >> InHeight;
	
	cout << "Surface area: " << SurfaceArea(InRadius, InHeight) << endl;
	
	return 0;
}

double SurfaceArea(double Radius, double Height)
{
	double Area = 2*Pi*Radius*Radius + 2*Pi*Radius*Height;
	return Area;
}