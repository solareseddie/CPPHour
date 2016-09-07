//Describes the size of standard C++ Variables

#include<iostream>

int main()
{
	using namespace std;
	cout << "Computing the size of some C++ inbuilt variable types:\n" << endl;
	
	cout << "Size of bool:\t\t\t\t" << sizeof(bool) << " bytes" << endl;
	cout << "Size of char:\t\t\t\t" << sizeof(char) << " bytes" << endl;
	cout << "Size of unsigned short int:\t\t" << sizeof(unsigned short) << " bytes" << endl;
	cout << "Size of short int:\t\t\t" << sizeof(short) << " bytes" << endl;
	cout << "Size of unsigned long int:\t\t" << sizeof(unsigned long) << " bytes" << endl;
	cout << "Size of long:\t\t\t\t" << sizeof(long) << " bytes" << endl;
	cout << "Size of int:\t\t\t\t" << sizeof(int) << " bytes" << endl;
	cout << "Size of unsigned long long:\t\t" << sizeof(unsigned long long) << " bytes" << endl;
	cout << "Size of long long:\t\t\t" << sizeof(long long) << " bytes" << endl;
	cout << "Size of unsigned int:\t\t\t" << sizeof(unsigned int) << " bytes" << endl;
	cout << "Size of float:\t\t\t\t" << sizeof(float) << " bytes" << endl;
	cout << "Size of double:\t\t\t\t" << sizeof(double) << " bytes" << endl;
	
	return 0;
}