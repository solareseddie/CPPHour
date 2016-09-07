#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	//Private member data
	string Name;
	int Age;
	
public:
	//Constructor
	Human()
	{
		Age = 0; //Initialized to ensure no junk value
		cout << "Default constructor creates an instance of Human" << endl;
	}
	
	//Overloaded constructor takes name
	Human(string HumansName)
	{
		Name = HumansName;
		Age = 0; //Initialized to ensure no junk value
		cout << "Overloaded constructor creates " << Name << endl;
	}
	
	//Overloaded constructor that takes name and age
	Human(string HumansName, int HumansAge)
	{
		Name = HumansName;
		Age = HumansAge;
		cout << "Overloaded constructor creates ";
		cout << Name << " of " << Age << " years" << endl;
	}
	
	void SetName(string HumansName)
	{
		Name = HumansName;
	}
	
	void SetAge(int HumansAge)
	{
		Age = HumansAge;
	}
	
	void IntroduceSelf()
	{
		cout << "I am " + Name << " and am ";
		cout << Age << " years old" << endl;
	}
};

int main()
{
	Human FirstMan; //Use default constructor
	FirstMan.SetName("Adam");
	FirstMan.SetAge(30);
	
	Human FirstWoman("Eve"); //Use overloaded constructor
	FirstWoman.SetAge(28);
	
	Human FirstChild("Rose", 1);
	
	FirstMan.IntroduceSelf();
	FirstWoman.IntroduceSelf();
	FirstChild.IntroduceSelf();
	
	return 0;
}