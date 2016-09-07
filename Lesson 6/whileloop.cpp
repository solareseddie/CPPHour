#include <iostream>
using namespace std;

int main()
{
	char UserSelection = 'm'; //Initial value
	
	while (UserSelection != 'x')
	{
		cout << "Enter two integers: " << endl;
		int Num1 = 0, Num2 = 0;
		cin >> Num1;
		cin >> Num2;
		
		cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
		cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
		
		cout << "Press x to exit(x) or any other key to recalculate" << endl;
		cin >> UserSelection;
	}
	
	cout << "Goodbye!" << endl;
	
	return 0;
}