#include <iostream>
using namespace std;

int main()
{
	cout << "Use sizeof of determine memory occupied by arrays" << endl;
	int MyNumbers [100] = {0};
	
	cout << "Bytes occupied by an int: " << sizeof(int) << endl;
	cout << "Bytes occupied by array MyNumbers: " << sizeof(MyNumbers) << endl;
	cout << "Bytes occupied by each element: " << sizeof(MyNumbers[0]) << endl;
	
	return 0;
}