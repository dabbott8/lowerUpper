#include<iostream>
#include<string>
using namespace std;

int main()
{
	char input[20];
	char output[20];

	cout << "Enter a String of Characters to be Capitalized : ";
	cin >> input;
	for (int x = 0; x<20; x++)
		if (input[x] != 'x\0')
			input[x] = toupper(input[x]);
										 
		else
			break;

	cout << "\n\n\n" << input << "\n\n\n";

	cout << "Press <Enter> to Exit";
	cin.ignore();
	cin.get();
	return 0;
}

