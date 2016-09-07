#include <iostream>
using namespace std;

void CalculateSquare(const int& Number, int& Result) //note "const"
{
	Result = Number*Number;
}

int main()
{
	cout << "Enter a number you wish to square: ";
	int Number = 0;
	cin >> Number;
	
	int Square = 0;
	CalculateSquare(Number, Square);
	cout << Number << "^2 = " << Square << endl;
	
	return 0;
}