#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	char Buffer[20] = {'\0'};
	
	cout << "Enter a line of text: " << endl;
	string LineEntered;
	getline(cin, LineEntered);
	
	if (LineEntered.length() < 20)
	{
		strcpy(Buffer, LineEntered.c_str());
		cout << "Buffer contains: " << Buffer << endl;
	}
	
	return 0;
}
