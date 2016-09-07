#include <iostream>
using namespace std;

int main()
{ 
	cout << "Enter two integers:" << endl;
	int Num1 = 0, Num2 = 0;
	cin >> Num1;
	cin >> Num2;
	
	cout << Num1 << " + " << Num2 << " = " << Num1 + Num2 << endl;
	cout << Num1 << " - " << Num2 << " = " << Num1 - Num2 << endl;
	cout << Num1 << " * " << Num2 << " = " << Num1 * Num2 << endl;
	cout << Num1 << " / " << Num2 << " = " << Num1 / Num2 << endl;
	cout << Num1 << " % " << Num2 << " = " << Num1 % Num2 << endl;
	
	return 0;
}