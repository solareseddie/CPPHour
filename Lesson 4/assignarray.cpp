#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	
	//Array of 5 integers, initialized to zero
	int MyNumbers [ARRAY_LENGTH] = {0};
	
	cout << "Enter index of the element to be changed: ";
	int nElementIndex = 0;
	cin >> nElementIndex;
	
	cout << "Enter new value: ";
	cin >> MyNumbers [nElementIndex];
	
	cout << "First element at index 0: " << MyNumbers [0] << endl;
	cout << "Second element at index 1: " << MyNumbers [1] << endl;
	cout << "Third element at index 2: " << MyNumbers [2] << endl;
	cout << "Fourth element at index 3: " << MyNumbers [3] << endl;
	cout << "Fifth element at index 4: " << MyNumbers [4] << endl;
	
	return 0;
}