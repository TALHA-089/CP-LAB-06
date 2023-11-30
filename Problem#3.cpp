#include<iostream>
using namespace std;

char uppercase(char alphabet);

int main()
{
	char letter;
	cout << "\n\nEnter a Letter (lower_case): ";
	cin >> letter;
	cout << "\n\nEntered Letter in Upper-Case: " << uppercase(letter);
	cout << endl << endl;
	system("pause");
	return 0;
}

char uppercase(char alphabet)
{
	alphabet -= 32;                //ASCII value of uppercase char A to Z ranges from 65 to 92

	//For conversion we are subtracting 32 from the ASCII value of input letter.
	return alphabet;
}