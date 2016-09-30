#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
	char* Buffer;
	
	//private default constructor
	MyString() {}
	
public:
	//constructor
	MyString (const char* InitialInput)
	{
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
	
	//Copy Assignment Operator
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
	
	const char& operator[] (int Index) const
	{
		if (Index < GetLength());
			return Buffer[Index];
	}
	
	//Destructor
	~MyString()
	{
		if (Buffer != NULL)
			delete [] Buffer;
	}
	
	int GetLength() const
	{
		return strlen(Buffer);
	}
	
	operator const char*()
	{
		return Buffer;
	}
};

int main()
{
	cout << "Type a statement: ";
	string strInput;
	getline(cin, strInput);
	
	MyString youSaid(strInput.c_str());
	
	cout << "Using operator [] for displaying your input: " << endl;
	for (int Index = 0; Index < youSaid.GetLength(); ++Index)
		cout << youSaid[Index] << " ";
	cout << endl;
	
	cout << "Enter index 0 - " << youSaid.GetLength() - 1 << ": ";
	int InIndex = 0;
	cin >> InIndex;
	cout << "Input character at zero-based position: " << InIndex;
	cout << " is: " << youSaid[InIndex] << endl;
	
	return 0;
}