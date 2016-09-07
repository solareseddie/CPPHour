#include <iostream>
using namespace std;

//Function declaration and definition
int DemoConsoleOutput()
{
	cout << "This is a simple string literal" << endl;
	cout << "Writinng number five: " << 5 << endl;
	cout << "Performing division by 10 / 5 = " << 10/5 << endl;
	cout << "Pi when approximated is 22 / 7 = " << 22/7 << endl;
	cout << "Pi more accurately is 22 / 7 = " << 22.0/7 << endl;
	
	return 0;
}

int main()
{
	//Function call with return used to exit
	return DemoConsoleOutput();
}