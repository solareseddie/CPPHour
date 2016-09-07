#include <iostream>
using namespace std;

int GetFibNumber(int FibIndex)
{
	if (FibIndex < 2)
		return FibIndex;
	else // recursion if Fibindex >= 2
		return GetFibNumber(FibIndex - 1) + GetFibNumber(FibIndex - 2);
}

int main()
{
	cout << "Enter 0-based index of desired Fibonacci Number: ";
	int Index = 0;
	cin >> Index;
	
	cout << "Fibonacci number is: " << GetFibNumber(Index) << endl;
	return 0;
}