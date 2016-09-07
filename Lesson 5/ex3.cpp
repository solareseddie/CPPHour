#include <iostream>
using namespace std;

int main()
{
	cout << "Enter two boolean characters:" << endl;
	bool val1 = false, val2 = false;
	cin >> val1;
	cin >> val2;
	
	cout << "Bitwise AND: " << (val1 & val2) << endl;
	cout << "Bitwise OR: " << (val1 | val2) << endl;
	cout << "Bitwise XOR: " << (val1 ^ val2) << endl;
	
	return 0;
}