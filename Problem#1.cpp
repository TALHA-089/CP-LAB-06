#include<iostream>
using namespace std;

int swap(int a);

int main()
{
	int num;

	cout << "\n\nEnter A Number: ";
	cin >> num;
	cout << "\n\nBEFORE SWAP: " << num;
	cout << "\n\nAFTER SWAP: " << swap(num);

	cout << endl << endl;
	system("pause");
	return 0;
}

int swap(int a)
{
	int r_num = 0;
	while (a > 0)
	{
		int digit = a % 10;
		r_num = r_num * 10 + digit;
		a = a / 10;
	}
	return r_num;
}