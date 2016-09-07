#include <iostream>
using namespace std;

int main()
{
	cout << "Answer questions with 0 or 1" << endl;
	cout << "Is there a deep discount on your favorite car? ";
	bool Discount = false;
	cin >> Discount;
	
	cout << "Did you get a fantastic bonus? ";
	bool FantasticBonus = false;
	cin >> FantasticBonus;
	
	if (Discount || FantasticBonus)
		cout << "Congratulations, you can buy that car!" << endl;
	else
		cout << "Sorry, waiting a while is a good idea" << endl;
	
	return 0;
}