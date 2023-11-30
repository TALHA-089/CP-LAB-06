#include<iostream>
using namespace std;

double compare(float a, float b);

int main()
{
	float Distance_1, Distance_2;
	cout << "\n\nEnter First Distance Value (km): ";
	cin >> Distance_1;
	cout << "\n\nEnter Second Distance Value (km): ";
	cin >> Distance_2;
	cout << "\n\nLARGER Distance (km): " << compare(Distance_1, Distance_2);
	cout << endl << endl;
	system("pause");
	return 0;
}

double compare(float a, float b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}