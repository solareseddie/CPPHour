#include <iostream>
#include <string>
using namespace std;

class Human
{
	private:
		string Name;
		int Age;
		
	public:
		void SetName (string HumansName)
		{
			Name = HumansName;
		}
		
		void SetAge (int HumansAge)
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
	//Constructing an object of class Human with attribute Name as "Adam"
	Human FirstMan;
	FirstMan.SetName("Adam");
	FirstMan.SetAge(30);
	
	//Constructing an object of class Human with attribute Name as "Eve"
	Human FirstWoman;
	FirstWoman.SetName("Eve");
	FirstWoman.SetAge(28);
	
	FirstMan.IntroduceSelf();
	FirstWoman.IntroduceSelf();
	
	return 0;
}