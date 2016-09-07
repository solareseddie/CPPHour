#include <iostream>
using namespace std;

void MultiplyNumbers ()
{
	cout << "Enter the first number: ";
	int FirstNumber = 0;
	cin >> FirstNumber;
	
	cout << "Enter the second number: ";
	int SecondNumber = 0;
	cin >> SecondNumber;
	
	//Multiply two numbers, store result in a variable
	int MultiplicationResult = FirstNumber * SecondNumber;
	
	//Display result
	cout << FirstNumber << " x " << SecondNumber;
	cout <<  " = " << MultiplicationResult << endl;
}

int main()
{
	cout << "This program will help you multiply two numbers" << endl;
	
	//Call the function that does all the work
	MultiplyNumbers();
	
	// cout << FirstNumber << " x " << SecondNumber;
	// cout << " = " << MultiplicationResult << endl;
	
	return 0;
}