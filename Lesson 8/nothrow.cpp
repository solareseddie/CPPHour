#include <iostream>
using namespace std;

int main()
{
	//Request lots of memory space, use nothrow version
	int* pAge = new(nothrow) int [0x1fffffff];
	
	if (pAge) //Check pAge != NULL
	{
		//Use the allocated memory
		delete[] pAge;
	}
	else
		cout << "Memory allocation failed. Ending program" << endl;
	
	return 0;
}