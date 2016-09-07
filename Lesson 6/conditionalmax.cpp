#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two numbers" << endl;
	int Num1 = 0, Num2 = 0;
	cin >> Num1;
	cin >> Num2;
	
	int Max = (Num1 > Num2)? Num1 : Num2;
	cout << "The greater of " << Num1 << " and " \
		 << Num2 << " is: " << Max << endl;
		 
	return 0;
}