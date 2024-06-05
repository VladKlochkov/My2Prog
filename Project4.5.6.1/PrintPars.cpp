#include "PrintPars.h" 

void printPersonFIO(Person p)
{
	cout << "Фио: " << p.name << " " << p.secondname << " " << p.surname << "." << endl;
}

void printPersonAge(Person p)
{
	cout << "Возраст: " << p.age << endl;
}

void printPersonWeight(Person p)
{
	cout << "Вес: " << p.weight << endl;
}
