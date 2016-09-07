#include <iostream>
#include <string>

using namespace std;

int main()
{
	string Greetings ("Hello std::string!");
	cout << Greetings << endl;
	
	cout << "Enter a line of text: " << endl;
	string FirstLine;
	getline(cin, FirstLine);
	
	cout << "Enter another: " << endl;
	string SecLine;
	getline(cin, SecLine);
	
	cout << "Result of concatnation:" << endl;
	string Concat = FirstLine + " " + SecLine;
	cout << Concat << endl;
	
	cout << "Copy of concatenated string: " << endl;
	string Copy;
	Copy = Concat;
	cout << Copy << endl;
	
	cout << "Length of concat string: " << Concat.length() << endl;
	
	return 0;
}