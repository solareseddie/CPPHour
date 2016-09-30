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
		if (InitialInput != NULL)
		{
			Buffer = new char [strlen(InitialInput) + 1];
			strcpy(Buffer, InitialInput);
		}
		else
			Buffer = NULL;
	}
	
	//Copy constructor
	MyString(const MyString& CopySource)
	{
		cout << "Copy Constructor: copying from MyString" << endl;
		
		if (CopySource.Buffer != NULL)
		{
			//ensure deep copy by first allocating own buffer
			Buffer = new char [strlen(CopySource.Buffer) + 1];
			
			//copy from the source into local buffer
			strcpy(Buffer, CopySource.Buffer);
			
			//Display memory address pointed by local buffer
			cout << "Buffer points to: " << hex;
			cout << (unsigned int*)Buffer << endl;
		}
		else
			Buffer = NULL;
	}
	
	//Copy assignment operator
	MyString& operator == (const MyString& CopySource)
	{
		if ((this != &CopySource) && (CopySource.Buffer != NULL))
		{
			if (Buffer != NULL)
				delete[] Buffer;
			
			//ensure deep copy first allocating own buffer
			Buffer = new char [strlen(CopySource.Buffer) + 1];
			
			//copy from the source into local buffer
			strcpy(Buffer, CopySource.Buffer);
		}
		return *this;
	}
	
	//Destructor
	~MyString()
	{
		if (Buffer != NULL)
			delete [] Buffer;
	}
	
	int GetLength()
	{
		return strlen(Buffer);
	}
	
	operator const char* ()
	{
		return Buffer;
	}
};

int main()
{
	MyString String1("Hello ");
	MyString String2(" World");
	
	cout << "Before assignment: " << endl;
	cout << String1 << String2 << endl;
	String2 = String1;
	cout << "After assignment String2 = String1: " << endl;
	cout << String1 << String2 << endl;
	
	return 0;
}