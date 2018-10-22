#include <iostream>
using namespace std;

int main() {
	float grades, gpa, g_oop, g_it, g_calculus, g_english, g_physics;
	float hour, h_oop, h_it, h_calculus, h_english, h_physics;

	// Grades

	cout << "Enter OOP1 grade: ";
	cin >> g_oop;

	cout << "Enter IT grade: ";
	cin >> g_it;

	cout << "Enter Calculus grade: ";
	cin >> g_calculus;

	cout << "Enter English grade: ";
	cin >> g_english;

	cout << "Enter Physics grade: ";
	cin >> g_physics;

	// HOURS

	cout << "Enter OOP1 hour: ";
	cin >> h_oop;

	cout << "Enter IT hour: ";
	cin >> h_it;

	cout << "Enter Calculus hour: ";
	cin >> h_calculus;

	cout << "Enter English hour: ";
	cin >> h_english;

	cout << "Enter Physics hour: ";
	cin >> h_physics;

	grades = g_oop * h_oop + g_it * h_it + g_calculus * h_calculus + g_english * h_english + g_physics * h_physics;

	hour = h_oop + h_it + h_calculus + g_english + h_physics;

	gpa = grades / hour;

	cout << "\n \n GPA: " << roundf(gpa * 10) / 10 << endl;

	system("pause");
	return 0;
}
