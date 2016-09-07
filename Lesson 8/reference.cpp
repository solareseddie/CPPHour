#include <iostream>
using namespace std;

int main()
{
	int Original = 30;
	cout << "Original = " << Original << endl;
	cout << "Original is at address: " << hex << &Original << endl;
	
	int& Ref = Original;
	cout << "Ref is at address: " << hex << &Ref << endl;
	
	int& Ref2 = Ref;
	cout << "Ref2 is at address: " << hex << &Ref2 << endl;
	cout << "Ref2 gets value, Ref2 = " << dec << Ref2 << endl;
	
	return 0;
}