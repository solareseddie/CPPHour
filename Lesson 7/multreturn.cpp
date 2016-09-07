#include <iostream>
using namespace std;

const double Pi = 3.14159;

void QueryAndCalculate()
{
	cout << "Enter radius: ";
	double Radius = 0;
	cin >> Radius;
	
	cout << "Area: " << Pi*Radius*Radius << endl;
	
	cout << "Do you wish to calculate circumference(y/n)? ";
	char CalCircum = 'n';
	cin >> CalCircum;
	
	if (CalCircum == 'n')
		return;
	
	cout << "Circumference: " << 2 * Pi * Radius << endl;
	return;
}

int main()
{
	QueryAndCalculate();
	
	return 0;
}