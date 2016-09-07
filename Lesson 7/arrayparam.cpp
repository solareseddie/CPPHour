#include <iostream>
using namespace std;

void DisplayArray(int Numbers[], int Length)
{
	for (int Index = 0; Index < Length; ++Index)
		cout << Numbers[Index] << " ";
	
	cout << endl;
}

void DisplayArray(char Characters[], int Length)
{
	for (int Index = 0; Index < Length; ++Index)
		cout << Characters[Index] << " ";
	
	cout << endl;
}

int main()
{
	int MyNumbers[4] = {24, 58, -1, 245};
	DisplayArray(MyNumbers, 4);
	
	char MyStatement[7] = {'H', 'e', 'l', 'l', 'o', '!', '\0'};
	DisplayArray(MyStatement, 7);
	
	return 0;
}