#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two integers: " << endl;
	int Num1 = 0, Num2 = 0;
	cin >> Num1;
	cin >> Num2;
	
	cout << "Enter \'m\' to multiply, anything else to add: ";
	char UserSelection = '\0';
	cin >> UserSelection;
	
	int Result = 0;
	if (UserSelection == 'm')
		Result = Num1 * Num2;
	else
		Result = Num1 + Num2;
	
	cout << "Result is: " << Result << endl;
	
	return 0;
}