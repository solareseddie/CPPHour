#include<iostream>

int main()
{
	using namespace std;
	
	cout << "Size of an unsized integer:\t\t" << sizeof(unsigned int) << " bytes" << endl;
	cout << "Size of an integer:\t\t\t" << sizeof(int) << " bytes" <<  endl;
	cout << "Size of an long integer:\t\t" << sizeof(long int) << " bytes" <<  endl;
	
	return 0;
}