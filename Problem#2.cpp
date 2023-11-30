#include<iostream>
using namespace std;
double POWER(double num, int pow = 2);
int main()
{
	double number, result;
	int power;
	char choice;
	cout << "\n\nEnter a Number: ";
	cin >> number;
	cout << "\n\nDo you want to enter the Exponential (Y/N)? ";
	cin >> choice;
	if (choice == 'Y' || choice == 'y')
	{
		cout << "\n\nEnter Exponential: ";
		cin >> power;
		result = POWER(number, power);
	}
	else
	{
		result = POWER(number);
	}
	cout << "\n\nRESULT: " << result;
	cout << endl << endl;
	system("pause");
	return 0;
}
double POWER(double num, int pow)
{
	double result = 1;
	for (int i = 0; i < pow; i++)
	{
		result *= num;
	}
	return result;
}
