#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LEN = 5;
	
	//Static array of 5 integers initialized
	int MyNumbers[ARRAY_LEN] = {24, -1, 365, -999, 2011};
	
	//Pointer initialized to first element in array
	int* pNumbers = MyNumbers;
	
	cout << "Displaying array using pointer syntax, operator*" << endl;
	for (int Index = 0; Index < ARRAY_LEN; ++Index)
		cout << "Element " << Index << " = " << *(MyNumbers + Index) << endl;
	
	cout << "Displaying array using pointer with array syntax, operator[]" << endl;
	for (int Index = 0; Index < ARRAY_LEN; ++Index)
		cout << "Element " << Index << " = " << pNumbers[Index] << endl;
	
	return 0;
}