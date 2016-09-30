#include <iostream>
using namespace std;

class Date
{
private:
	int Day, Month, Year;
	
public:
	//Constructor that initializes the object to a day, month, and year
	Date (int InputDay, int InputMonth, int InputYear)
		:	Day(InputDay), Month(InputMonth), Year(InputYear) {};
		
	//Binary addition assignment
	void operator += (int DaysToAdd)
	{
		Day += DaysToAdd;
	}
	
	//Binary subtraction assignment
	void operator -= (int DaysToSub)
	{
		Day -= DaysToSub;
	}
	
	void DisplayDate()
	{
		cout << Day << " / " << Month << " / " << Year << endl;
	}
};

int main()
{
	//Instantiate and initialize a date object to 25 Dec 2011
	Date Holiday(25, 12, 2011);
	
	cout << "Holiday is on: ";
	Holiday.DisplayDate();
	
	cout << "Holiday -= 19 gives: ";
	Holiday -= 19;
	Holiday.DisplayDate();
	
	cout << "Holiday += 25 gives: ";
	Holiday += 25;
	Holiday.DisplayDate();
	
	return 0;
}