#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
	char* Buffer;
	
public:
	//Constructor
	MyString(const char* InitialInput)
	{
		cout << "Constructor: creating new MyString" << endl;
		if (InitialInput != NULL)
		{
			Buffer = new char[strlen(InitialInput) + 1];
			strcpy(Buffer, InitialInput);
			
			//Display memory address pointed by local buffer
			cout << "Buffer points to: " << hex;
			cout << (unsigned int*)Buffer << endl;
		}
		else
			Buffer = NULL;
	}
	
	//Copy Constructor
	MyString(const MyString& CopySource)
	{
		cout << "Copy constructor: copying from MyString" << endl;
		
		if(CopySource.Buffer != NULL)
		{
			//ensure deep copy by first allocated own bufdfer
			Buffer = new char [strlen(CopySource.Buffer) + 1];
			
			//copy from the source into local buffer
			strcpy(Buffer, CopySource.Buffer);
			
			//display memory address pointed by local buffer
			cout << "Buffer points to: " << hex;
			cout << (unsigned int*)Buffer << endl;
		}
		else
			Buffer = NULL;
	}
	
	//Destructor
	~MyString()
	{
		cout << "Invoking destructor, clearing up" << endl;
		if (Buffer != NULL)
			delete [] Buffer;
	}
	
	int GetLength()
	{
		return strlen(Buffer);
	}
	
	const char* GetString()
	{
		return Buffer;
	}
};

void UseMyString(MyString Input)
{
	cout << "String buffer in MyString is " << Input.GetLength();
	cout << " characters long" << endl;
	
	cout << "Buffer contains: " << Input.GetString() << endl;
	return;
}

int main()
{
	MyString SayHello("Hello from String Class");
	
	//Pass SayHello as a parameter to the function
	UseMyString(SayHello);
	
	return 0;
}