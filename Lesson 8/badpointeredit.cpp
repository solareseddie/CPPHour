#include <iostream>
using namespace std;

int main()
{
	cout << "Is it sunny(y/n)? ";
	char UserInput = 'y';
	cin >> UserInput;
	
	if (UserInput == 'y')
	{
		//initialized pointer (good)
		int* pTemperature = new int;
		*pTemperature = 30;
		
		cout << "Temperature is: " << *pTemperature << endl;
		
		//done using pointer? delete
		delete pTemperature;
	}
	
	return 0;
}