#include "Name.h"

int main()
{
	cout << "==============================" << endl;
	cout << "test af klassen 'name' " << endl;
	cout << "==============================" << endl;
	cout << "==============================" << endl;
	cout << "test med default constructor" << endl;
	cout << "------------------------------" << endl;
	Name name1;
	name1.print();
	cout << "==============================" << endl;
	cout << "==============================" << endl;
	cout << "test af set-funktionen." << endl;
	cout << "------------------------------" << endl;
	name1.set("Stefan", "Nielsen");
	name1.print(); 
	cout << "==============================" << endl;
	cout << "==============================" << endl;
	cout << "test med specifik constructor" << endl;
	cout << "------------------------------" << endl;
	Name name2("Stefan", "Nielsen");
	name2.print();
	cout << "==============================" << endl;
}