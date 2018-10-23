#include <iostream>
#include <string>
using namespace std;

int main() {
	float grades[5], hours[5], numerator = 0, denominator = 0, gpa = 0;
	string subjects[6] = { "Nothing", "OOP", "IT", "Calculus", "English", "Physics" };

	bool correct = true;

	for (int i = 1; i <= 5; ) {
			cout << "Enter grade of " << subjects[i] << " subject: ";
			cin >> grades[i];

			cout << "Enter hour of " << subjects[i] << " subject: ";
			cin >> hours[i];

			if (grades[i] <= 4.5 && hours[i] <= 4.5 && grades[i] > 0 && hours[i] > 0){
				numerator += grades[i] * hours[i];
				denominator += hours[i];
				i++;
			}
			else {
				cout << "\nWrong input!\nTry Again!\n" << endl;
				
				continue;
			}
	}
	gpa = ((numerator / denominator)*10)/10;

	if (gpa == 4){
		cout << "\nGPA : " << gpa << endl;
		cout << "\n\nExcellent, you did a great job, many congratulations" << endl;
	}
	else if (gpa > 4.5){
		cout << "\nGPA : " << gpa << endl;
		cout << "\n\nWell done, Congratulations" << endl;
	}
	else if (gpa > 3.5){
		cout << "\nGPA : " << gpa << endl;
		cout << "\n\n Good,job" << endl;
	}
	else if (gpa > 3){
		cout << "\nGPA : " << gpa << endl;
		cout << "\n\n Passed, you need to improve" << endl;
	}
	else if (gpa > 0){
		cout << "\nGPA : " << gpa << endl;
		cout << "\n\n Not good" << endl;
	}
	system("pause");
	return 0;
}
