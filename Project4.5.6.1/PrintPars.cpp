#include "PrintPars.h"

void printPersonPars(Person p)
{
	cout << "Фио: " << p.name << " " << p.secondname << " " << p.surname << "." << endl;
	cout << "Возраст: " << p.age << endl;
}

void printPersonFIO(Person p)
{
	cout << "Фио: " << p.name << " " << p.secondname << " " << p.surname << "." << endl;
}
