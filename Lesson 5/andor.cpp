#include <iostream>
using namespace std;

int main()
{
	cout << "Enter true(1) or false(0) for two operants:" << endl;
	bool Op1 = false, Op2 = false;
	cin >> Op1;
	cin >> Op2;
	
	cout << Op1 << " AND " << Op2 << " = " << (Op1 && Op2) << endl;
	cout << Op1 << " OR " << Op2 << " = " << (Op1 || Op2) << endl;
	
	return 0;
}