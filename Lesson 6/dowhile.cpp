#include <iostream>
using namespace std;

int main()
{
	char UserSelection = 'x'; // initial value 
	do
	{
		cout << "Enter two integers: " << endl;
		int Num1 = 0, Num2 = 0;
		cin >> Num1;
		cin >> Num2;
		
		cout << Num1 << " x " << Num2 << " = " << Num1 * Num2 << endl;
		cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
		
		cout << "Press x to exit(x) or any other key to recalculate" << endl;
		cin >> UserSelection;
	} while (UserSelection != 'x');
	
	cout << "Goodbye!" << endl;
	
	return 0;
}