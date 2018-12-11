/*
Name: Abdushukurov Azimiddinkhuja
Id: U1810045
Program: Pointers
*/

#include <iostream>

using namespace std;

int main(){

	double db = 13.5;

	int it = 14;

	char cr = 'A';

	double *db_data;

	int *it_data;

	char *cr_data;

	db_data = &db;

	it_data = &it;

	cr_data = &cr;

	cout << "Address stored in db variable " << db_data << endl;
	cout << "Value strored in db variable " << db << endl;
	cout << "Size of stored in db variable " << sizeof(db) << " bytes" << endl;

	cout << endl;

	cout << "Address stored in it variable " << it_data << endl;
	cout << "Value strored in it variable " << it << endl;
	cout << "Size of stored in it variable " << sizeof(it) << " bytes" << endl;

	cout << endl;

	cout << "Address stored in cr variable " << cr_data << endl;
	cout << "Value strored in cr variable " << cr << endl;
	cout << "Size of stored in cr variable " << sizeof(cr) << " bytes" << endl;

	system("pause");
	return 0;
}
