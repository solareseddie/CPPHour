#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a number: ";
	int Value = 0;
	cin >> Value;
	
	Value += 8;
	cout << "After += 8, Value = " << Value << endl;
	Value -= 2;
	cout << "After -= 2, Value = " << Value << endl;
	Value /= 4;
	cout << "After /= 4, Value = " << Value << endl;
	Value *= 4;
	cout << "After *= 4, Value = " << Value << endl;
	Value %= 1000;
	cout << "After %= 100, Value = " << Value << endl;
	
	//Note: henceforth assignment happens within cout
	cout << "After <<= 1, value = " << (Value <<= 1) << endl;
	cout << "After >>= 2, value = " << (Value >>= 2) << endl;
	
	cout << "After |= 0x55, value = " << (Value |= 0x55) << endl;
	cout << "After ^= 0x55, value = " << (Value ^= 0x55) << endl;
	cout << "After &= 0x55, value = " << (Value &= 0x55) << endl;
	
	return 0;
}