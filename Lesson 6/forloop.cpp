#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	int MyInts[ARRAY_LENGTH] = {0};
	
	cout << "Populate array of " << ARRAY_LENGTH << " integers" << endl;
	
	for (int ArrayIndex = 0; ArrayIndex < ARRAY_LENGTH; ++ArrayIndex)
	{
		cout << "Enter an integer for element " << ArrayIndex << ": ";
		cin >> MyInts[ArrayIndex];
	}
	
	cout << "Displaying contents of the array: " << endl;
	
	for (int ArrayIndex = 0; ArrayIndex < ARRAY_LENGTH; ++ArrayIndex)
	{
		cout << "Element " << ArrayIndex << " = " << MyInts[ArrayIndex] << endl;
	}
	
	return 0;
}