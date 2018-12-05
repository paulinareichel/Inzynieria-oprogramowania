#pragma once
#include <iostream>
#include <string>
#include"Decyzja.h"

using namespace std;

class Klient
{
public:
	friend class Decyzje;
	void Odwolaj_sie_od_decyzji();
	Klient();
	~Klient();
protected:
	string imie;
	string nazwisko;
	string pesel;
};


