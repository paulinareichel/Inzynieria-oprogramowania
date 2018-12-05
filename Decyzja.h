#pragma once
#include <iostream>
#include <string>

using namespace std;

class Decyzje
{
public:
	Decyzje();
	~Decyzje();
	void Wybierz_opcje();
protected:
	long Kwota;
	string Status_zgloszenia;
	string Uwagi_pracownika;
};