#pragma once
#include <iostream>
#include <string>

using namespace std;

class Polisa
{
protected:
	static int numer;
	int zawartosc[4];
	char data[11];
public:
	Polisa();	
	bool weryfikacja_polisy(int);
	friend class Zapis;
};
