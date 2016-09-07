//Calculates the Area and Circumference of a Circle

#include<iostream>
using namespace std;

int main()
{
	const double PI = 3.14159265359;
	float radius = 0;
	
	cout << "Enter a value for radius: ";
	cin >> radius;
	cout << "Circumference \t" << 2*PI*radius << "\n";
	cout << "Area \t\t\t" << PI*radius*radius;
	
	return 0;
	
}