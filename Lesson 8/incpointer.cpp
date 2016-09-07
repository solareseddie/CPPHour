#include <iostream>
using namespace std;

int main()
{
	cout << "How many integers do you wish to enter? ";
	int InputNums = 0;
	cin >> InputNums;
	
	int* pNumbers = new int [InputNums]; //allocate requested integers
	int* pCopy = pNumbers;
	
	cout << "Succesfully allocated memory for " << InputNums << " integers" << endl;
	for(int Index = 0; Index < InputNums; ++Index)
	{
		cout << "Enter number " << Index << ": ";
		cin >> *(pNumbers + Index);
	}
	
	cout << "Displaying all number input: " << endl;
	for (int Index = 0, int* pCopy = pNumbers; Index < InputNums; ++Index)
		cout << *(pCopy++) << " ";
	
	cout << endl;
	
	//done using the pointer? release memory
	delete[] pNumbers;
	
	return 0;
}