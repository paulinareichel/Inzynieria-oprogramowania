#include "Employee.h"

Employee::Employee()
{
	cout << "Podaj swoje ID"<<endl;
	cin >> this -> ID;
}


Employee::~Employee()
{
	//
}

int Employee::getid()
{
	return this->ID;
}
