#include <iostream>
using namespace std;

int main()
{
	int Age = 30;
	const double Pi = 3.1416;
	
	//Use & find the address in memory
	cout << "Integer Age is at: "  << hex << &Age << endl;
	cout << "Double Pi is located at: " << hex << &Pi << endl;
	
	return 0;
}