#include <iostream>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	cout << "Enter your name: ";
	string Name;
	cin >> Name;
	
	//Add 1 to reserve space for a terminating null
	int CharsToAllocate = Name.length() + 1;
	
	//request for memory to hold copy of input_iterator
	char* CopyOfName = new char [CharsToAllocate];
	
	//strcpy copies from a null-terminated string
	strcpy(CopyOfName, Name.c_str());
	
	//Display the copied string
	cout << "Dynamically allocated buffer contains: " << CopyOfName << endl;
	
	//Done using buffer? Delete
	delete[] CopyOfName;
	
	return 0;
}
