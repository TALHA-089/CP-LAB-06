#include<iostream>
using namespace std;

float charges(float hours);
float total(float charges[]);
float TOTAL(float hours[]);

int main()
{
	int Car_1, Car_2, Car_3;
	float hours[3];
	float Charges[3];
	float total_hours = 0, total_charges = 0;
	for (int i = 0; i < 3; i++)
	{
		cout << "\n\nEnter Hours for Car " << i + 1 << ": ";
		cin >> hours[i];
		Charges[i] = charges(hours[i]);
	}
	cout << "\nCAR\t\tHOURS\t\tCHARGES";
	for (int i = 0; i < 3; i++)
	{
		cout << "\n" << i + 1 << "\t\t" << hours[i] << "\t\t" << Charges[i];
	}
	cout << "\n\n\nTotal\t\t" << TOTAL(hours) << "\t\t" << total(Charges);
	cout << endl << endl;
	system("pause");
	return 0;
}

float charges(float hours)
{
	float charges = 2.00;
	if (hours <= 3.00)
	{
		return charges;
	}
	if (hours > 3)
	{
		hours -= 3;
		charges = (hours * 0.50) + 2.00;
		if (charges > 10.00)
		{
			charges = 10.00;
		}
	}
	return charges;
}

float total(float charges[])
{
	float sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += charges[i];
	}
	return sum;
}
float TOTAL(float hours[])
{
	float sum = 0;
	for (int i = 0; i < 3; i++)
	{
		sum += hours[i];
	}
	return sum;
}