#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
	char* Buffer;
	
	//private default constructor
	MyString(): Buffer(NULL)
	{
		cout << "Default constructor called" << endl;
	}
	
public:
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
	
	operator const char*()
	{
		return Buffer;
	}
	
	MyString operator + (const MyString& AddThis)
	{
		cout << "operator + called: " << endl;
		MyString NewString;
		
		if (AddThis.Buffer != NULL)
		{
			NewString.Buffer = new char[GetLength() + strlen(AddThis.Buffer) + 1];
			strcpy(NewString.Buffer, Buffer);
			strcat(NewString.Buffer, AddThis.Buffer);
		}
		
		return NewString;
	}
	
	//Constructor
	MyString(const char* InitialInput)
	{
		cout << "Constructor called for: " << InitialInput << endl;
		if (InitialInput != NULL)
		{
			Buffer = new char [strlen(InitialInput) + 1];
			strcpy(Buffer, InitialInput);
		}
		else
			Buffer = NULL;
	}
	
	//Copy Constructor
	MyString(const MyString& CopySource)
	{
		cout << "Copy constructor to copy from: " << CopySource.Buffer << endl;
		if (CopySource.Buffer != NULL)
		{
			//Ensure deep copy by first allocating own buffer
			Buffer = new char [strlen(CopySource.Buffer) + 1];
			
			//Copy form the source into local buffer
			strcpy(Buffer, CopySource.Buffer);
		}
		else
			Buffer = NULL;
	}
	
	//Copy assignment operator
	MyString& operator = (const MyString& CopySource)
	{
		cout << "Copy assignment operator to copy from: " << CopySource.Buffer << endl;
		if ((this != &CopySource) && (CopySource.Buffer != NULL))
		{
			if (Buffer != NULL)
				delete [] Buffer;
			
			//Ensure deep copy by first allocating own buffer
			Buffer = new char [strlen(CopySource.Buffer) + 1];
			
			//Copy from the source into local buffer
			strcpy(Buffer, CopySource.Buffer);
		}
		return *this;
	}
	
	//Move constructor
	MyString(MyString&& MoveSource)
	{
		cout << "Move constructor to move from: " << MoveSource.Buffer << endl;
		if (MoveSource.Buffer != NULL)
		{
			Buffer = MoveSource.Buffer; //take ownership i.e. move
			MoveSource.Buffer = NULL; //free move source
		}
	}
	
	//Move assignment operator
	MyString& operator = (MyString&& MoveSource)
	{
		cout << "Move assignment operator to move from: " << MoveSource.Buffer << endl;
		if ((MoveSource.Buffer != NULL) && (this != &MoveSource))
		{
			delete Buffer; //release own buffer
			
			Buffer = MoveSource.Buffer; //take ownership i.e. move
			MoveSource.Buffer = NULL; //free move source
		}
		
		return *this;
	}
};

int main()
{
	MyString Hello("Hello ");
	MyString World("World");
	MyString CPP(" of C++");
	
	MyString sayHelloAgain("overwrite this");
	sayHelloAgain = Hello + World + CPP;
	
	return 0;
}