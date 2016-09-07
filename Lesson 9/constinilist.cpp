#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	int Age;
	string Name;
	
public:
	Human(string InputName = "Adam", int InputAge = 25)
		:Name(InputName), Age(InputAge)
	{
		cout << "Constructed a Human called " << Name;
		cout << ", " << Age << " years old" << endl;
	}
};

int main()
{
	Human FirstMan;
	Human FirstWoman("Eve", 18);
	
	return 0;
}