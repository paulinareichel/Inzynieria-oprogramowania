#pragma once
#include <iostream>
#include <string>
#include "Polisa.h"

using namespace std;

class Klient
{
protected:
	string imie;
	string nazwisko;
	string pesel;
public:
	void Odwolaj_sie_od_decyzji();
	Klient();
	~Klient();
	friend class Zapis;
};
