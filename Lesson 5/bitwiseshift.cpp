#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int Input = 0;
	cin >> Input;
	
	int Half = Input >> 1;
	int Quarter = Input >> 2;
	int Double = Input << 1;
	int Quadruple = Input << 2;
	
	cout << "Quarter: " << Quarter << endl;
	cout << "Half: " << Half << endl;
	cout << "Double: " << Double << endl;
	cout << "Quadruple: " << Quadruple << endl;
	
	return 0;
}