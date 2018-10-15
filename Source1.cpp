/*  
	Name: Abdushukurov Azimiddin
	ID: U1810045
	Program: A company insures its drivers in the following cases
*/

#include <iostream>

using namespace std;

int main() {
	int age, gender, is_married;

	cout << "ABDUSHUKUROV INSURANCE & CO." << endl << endl << endl;
	
	cout << "| Enter your marital status |\n| 1. If married             |\n| 2. if not married         |\n| Choose: ";
	cin >> is_married;

	if (is_married == 1) {
		cout << "\n \n| You can be insured! \n\n" << endl;
	}
	else {
		

		cout << "\n \n| Enter your gender |\n| 1. If male     |\n| 2. If female   |\n| Choose:  ";
		cin >> gender;

		cout << "\n \n| Enter your age: ";
		cin >> age;

		if ((gender == 1 && age > 30) || (gender == 2 && age > 25)) {
			cout << "\n \n| You can be insured! \n\n" << endl;
		}

		else {
			cout << "\n \n| Sorry, but we can't insure you! \n \n" << endl;
		}

	}
	system("pause");
	return 0;

}