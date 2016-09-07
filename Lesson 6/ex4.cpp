#include <iostream>
using namespace std;

int main()
{
	enum Colors
	{
		Red = 0,
		Orange,
		Yellow,
		Green,
		Blue,
		Indigo,
		Violet
	};
	
	cout << "Find what days of the week are named after!" << endl;
	cout << "We use the rainbow colors Red, Orange, Yellow, Green, Blue, Indigo, Violet." << endl;
	cout << "Enter a number for a day (Red = 0, Orange = 1, etc..): ";
	
	int option = Red;
	cin >> option;
	
	switch(option)
	{
		case Red:
		case Orange:
		case Yellow:
		case Green:
		case Blue:
		case Indigo:
		case Violet:
			cout << "Yep, it's in the Rainbow" << endl;
			break;
		
		default:
			cout << "Not in the rainbow sorry!" << endl;
			break;
	}
	
	return 0;
}