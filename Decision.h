#pragma once
#include <string>
#include <fstream>
#include <iomanip>
#include "Employee.h"

class Decision
{
protected:
	string current;
	string content;
	int amount;
public:
	string getcurrent();
	string getcontent();
	int getamount();
	void save(Decision*, Employee*);
	Decision();
	~Decision();
	
};

