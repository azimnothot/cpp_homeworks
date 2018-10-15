/*
	Name: Abdushukurov Azimiddin
	ID: U1810045
	Program:  Program to print stars Sequence1
*/

#include <iostream>
using namespace std;

int main() {

	char al = 'A';
	for (int i = 1; i <= 4; ++i)
	{
		char s = al;
		for (int j = 1; j <= i; ++j, s++)
			
		{			
			cout << s << " ";	
		}

		cout << endl;
	}

	system("pause");
	return 0;

}