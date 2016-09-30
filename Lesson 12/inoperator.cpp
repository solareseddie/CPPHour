#include <iostream>
using namespace std;

class Date
{
private:
	int Day, Year, Month;
	
public:
	//Constructor that initializes the object to a day, month, and year
	Date (int InputDay, int InputMonth, int InputYear)
		: Day (InputDay), Month (InputMonth), Year (InputYear) {};
		
	bool operator == (const Date& compareTo)
	{
		return ((Day == compareTo.Day) && (Month == compareTo.Month) && (Year == compareTo.Year));
	}
	
	bool operator < (const Date& compareTo)
	{
		if (Year < compareTo.Year)
			return true;
		else if (Month < compareTo.Month)
			return true;
		else if (Day < compareTo.Day)
			return true;
		else
			return false;
	}
	
	bool operator <= (const Date& compareTo)
	{
		if (this -> operator == (compareTo))
			return true;
		else
			return this -> operator < (compareTo);
	}
	
	bool operator > (const Date& compareTo)
	{
		return !(this -> operator <= (compareTo));
	}
	
	bool operator >= (const Date& compareTo)
	{
		if (this -> operator == (compareTo))
			return true;
		else
			return this -> operator > (compareTo);
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
	
	if (Holiday1 < Holiday2)
		cout << "operator <: Holiday 1 happens first" << endl;
	
	if (Holiday2 > Holiday1)
		cout << "operator >: Holiday 2 happens later" << endl;
	
	if (Holiday1 <= Holiday2)
		cout << "operator <=: Holiday 1 happens before or during Holiday 2" << endl;
	
	if (Holiday2 >= Holiday1)
		cout << "operator >=: Holiday 2 happens after or during Holiday 1" << endl;
	
	return 0;
}