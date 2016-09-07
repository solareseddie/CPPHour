#include <iostream>
using namespace std;

void ReturnSquare(int& Number)
{
	Number *= Number;
}

int main()
{
	cout << "Enter a number you wish to square: ";
	int Number = 0;
	cin >> Number;
	
	ReturnSquare(Number);
	cout << "Square is: " << Number << endl;
	
	return 0;
}