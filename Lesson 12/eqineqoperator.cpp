#include <iostream>
using namespace std;

class Date
{
private:
	int Day, Month, Year;
	
public:
	//Constructor that initializes the object to a day, month, and year
	Date (int InputDate, int InputMonth, int InputYear)
		: Day (InputDate), Month (InputMonth), Year (InputYear) {};
		
	bool operator == (const Date& compareTo)
	{
		return ((Day == compareTo.Day)&&(Month == compareTo.Month)&&(Year == compareTo.Year));
	}
	
	bool operator != (const Date& compareTo)
	{
		return !(this -> operator == (compareTo));
	}
	
	void DisplayDate()
	{
		cout << Day << " / " << Month << " / " << Year << endl;
	}
};

int main()
{
	Date Holiday1 (25, 12, 2011);
	Date Holiday2 (31, 12, 2011);
	
	cout << "Holiday 1 is: ";
	Holiday1.DisplayDate();
	cout << "Holiday 2 is: ";
	Holiday2.DisplayDate();
	
	if (Holiday1 == Holiday2)
		cout << "Equality Operator: The two are on the same day" << endl;
	else
		cout << "Equality Operator: The two are on different days" << endl;
		
	if (Holiday1 != Holiday2)
		cout << "Inequality Operator: The two are on different days" << endl;
	else
		cout << "Inequality Operator: The two are on the same day" << endl;
	
	return 0;
	
}