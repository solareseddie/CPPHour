#include <iostream>
using namespace std;

void CalcArea(const double* const pPi, // const pointer to const data
			  const double* const pRadius, //i.e. nothing can be changed
			  double* const pArea) //change pointed value, not address
{
	//check pointers before using!
	if (pPi && pRadius && pArea)
		*pArea = (*pPi) * (*pRadius) * (*pRadius);
}

int main()
{
	const double Pi = 3.1416;
	
	cout << "Enter radius of circle: ";
	double Radius = 0;
	cin >> Radius;
	
	double Area = 0;
	CalcArea (&Pi, &Radius, &Area);
	
	cout << "Area is = " << Area << endl;
	
	return 0;
}