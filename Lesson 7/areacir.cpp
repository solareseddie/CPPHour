#include <iostream>
using namespace std;

const double Pi = 3.14159;

//Function declarations
double Area(double InputRadius);
double Circumference(double InputRadius);

int main()
{
	cout << "Enter radius: ";
	double Radius = 0;
	cin >> Radius;
	
	//Call function "Area"
	cout << "Area is: " << Area(Radius) << endl;
	
	//Call function "Circumference"
	cout << "Circumference is: " << Circumference(Radius) << endl;
	
	return 0;
}

//Function definitions (implementations)
double Area(double InputRadius)
{
	return Pi*InputRadius*InputRadius;
}

double Circumference(double InputRadius)
{
	return 2*Pi*InputRadius;
}