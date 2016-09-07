#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a word NOT longer than 20 characters:" << endl;
	
	char UserInput [21] = {'\0'};
	cin >> UserInput;
	
	cout << "Length of your input was: " << strlen(UserInput) << endl;
	
	return 0;
}