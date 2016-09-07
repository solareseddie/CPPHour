#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> DynArrNums (3);
	
	DynArrNums[0] = 365;
	DynArrNums[1] = -421;
	DynArrNums[2] = 789;
	
	cout << "Number of integers in array: " << DynArrNums.size() << endl;
	
	cout << "Enter another number for the array" << endl;
	int AnotherNum = 0;
	cin >> AnotherNum;
	DynArrNums.push_back(AnotherNum);
	
	cout << "Number of integers in array: " << DynArrNums.size() << endl;
	cout << "Last element in array: ";
	cout << DynArrNums[DynArrNums.size() - 1] << endl;
	
	return 0;
}