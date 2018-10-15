/*
	Name: Abdushukurov Azimiddin
	ID: U1810045
	Program: 4.2 Write a menu driven program which has following options:
*/

#include <iostream>

using namespace std;

int main() {
	
	int first_num, second_num, operation;
	bool action = true;
	while(action){
		cout << "Enter first number: ";
		cin >> first_num;

		cout << "Enter second number: ";
		cin >> second_num;
		 
		cout << "| Choose operation:             |\n| 1. Addition                   |\n| 2. Substraction               |\n| 3. Multiplication odd or even |\n| 4. Exit                       |\n\n| Choose: ";
		cin >> operation;

		int odd = (first_num * second_num) % 2;

		switch (operation)
		{
		case 1:
			cout << "\n \n Answer: " << first_num + second_num << endl << endl;
			break;
		case 2:
			cout << "\n \n Answer: "<< first_num - second_num << endl << endl;
			break;

		case 3:
			if (odd == 0) {
				cout << "\n \n Answer: even"<< endl << endl;
			}
			else {
				cout << "\n \n Answer: odd" << endl << endl;
			}
			break;

		case 4: 
			action = false;
			break;
		default:
			cout << "\n\n ERROR 400  |  BAD REQUEST \n\n" << endl;
			break;
		}
		cout << "\n \n Good bye..." << endl << endl;
	}
	system("pause");
	return 0;

}