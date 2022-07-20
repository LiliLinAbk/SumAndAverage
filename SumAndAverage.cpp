#include<iostream>
using namespace std;
int main()
{
	int number1;
	int number2;
	int number3;
	int sum;
	int average;

	
	cout << "Please Enter Number one : ";
	cin >> number1;
	cout << "Please Enter Number two: ";
	cin >> number2;
	cout << "Please Enter Number three: ";
	cin >> number3;

	sum = number1 + number2 + number3;

	average = sum / 3;

	cout << "The Sum of three numbers is  " << sum << endl;
	cout << "The Average of three numbers is = " << average << endl;

	return 0;

}