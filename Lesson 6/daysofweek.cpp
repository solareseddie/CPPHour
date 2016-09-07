#include <iostream>
using namespace std;

int main()
{
	enum DaysOfWeek
	{
		Sunday = 0,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};
	
	cout << "Find what days of the week are named after!" << endl;
	cout << "Enter a number for a day (Sunday = 0): ";
	
	int Day = Sunday; //Initialize to Sunday
	cin >> Day;
	
	if (Day == Sunday)
		cout << "Sunday was named after the Sun" << endl;
	else if (Day == Monday)
		cout << "Monday was named after the Moon" << endl;
	else if (Day == Tuesday)
		cout << "Tuesday was named after Mars" << endl;
	else if (Day == Wednesday)
		cout << "Wednesday was named after Mercury" << endl;
	else if (Day == Thursday)
		cout << "Thursday was named after Jupiter" << endl;
	else if (Day == Friday)
		cout << "Friday was named after Venus" << endl;
	else if (Day == Saturday)
		cout << "Saturday was named after Saturn" << endl;
	else
		cout << "Wrong input, execute again" << endl;
	
	return 0;
}