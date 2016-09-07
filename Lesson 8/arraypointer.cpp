#include <iostream>
using namespace std;

int main()
{
	//Static array of 5 integers
	int MyNumbers[5];
	
	//array assigned to pointer to int
	int* pNumbers = MyNumbers;
	
	//Displace address contained in pointer
	cout << "pNumbers = " << hex << pNumbers << endl;
	
	//Address of first element of array
	cout << "&MyNumbers[0] = " << hex << &MyNumbers[0] << endl;
	
	return 0;
}