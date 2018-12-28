#pragma once
#include <iostream>
using namespace std;

class Employee
{
protected:
	int ID;
public:
	Employee();
	~Employee();
	int getid();
	friend class Decision;
};

