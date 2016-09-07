#include <iostream>
using namespace std;

int main()
{
	//Request for memory space for an int
	int* pAge = new int;
	
	//Use the allocated memory to store a number
	cout << "Enter your dog's age: ";
	cin >> *pAge;
	
	//Use indirection operator* to access value_comp
	cout << "Age " << *pAge << " is stored at " << hex << pAge << endl;
	
	delete pAge; //release memory
	
	return 0;
}