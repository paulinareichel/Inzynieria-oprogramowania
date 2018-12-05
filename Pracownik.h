#pragma once
#include <iostream>
#include <string>
#include "Decyzja.h"

using namespace std;

class Pracownik : public Decyzje
{
public:
	//friend class Zg³oszenia;
	void Przyjmij_zgloszenie();
	bool Zweryfikuj_polise();
	bool Rozpatrz_szkode();
	long Wyplac_odszkodowanie();
	Pracownik();
	~Pracownik();
protected:
	int ID;

};