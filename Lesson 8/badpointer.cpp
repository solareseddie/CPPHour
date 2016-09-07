#include <iostream>
using namespace std;

int main()
{
	//unitialized pointer (bad)
	int* pTemperature;
	
	cout << "Is it sunny(y/n)?" << endl;
	char UserInput = 'y';
	cin >> UserInput;
	
	if (UserInput == 'y')
	{
		pTemperature = new int;
		*pTemperature = 30;
	}
	
	//pTemperature contains invalid value if user entered 'n'
	cout << "Temperature is: " << *pTemperature;
	
	//delete also being invoked for those cases new wasn't done
	delete pTemperature;
	
	return 0;
}