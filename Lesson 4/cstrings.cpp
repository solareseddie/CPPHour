#include <iostream>
using namespace std;

int main()
{
	char SayHello[] = {'H', 'e', 'l', 'l', 'o', ' ', 'W', 'o', 'r', 'l', 'd', '\0'};
	cout << SayHello << endl;
	cout << "Size of array: " << sizeof(SayHello) << endl;
	
	cout << "Replacing space with null" << endl;
	SayHello[5] = '\0';
	cout << SayHello << endl;
	cout << "Size of array: " << sizeof(SayHello) << endl;
	
	return 0;
}