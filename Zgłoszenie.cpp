#include "Zg這szenie.h"
int Zg這szenie::Id_zg這szenia;

Zg這szenie::Zg這szenie()
{
	Id_zg這szenia++;
	Klient klient;
	opisz_zdarzenie();
}

void Zg這szenie::opisz_zdarzenie()
{
	cout << "Opisz zdarzenie:" << endl;
	cin >> this->opis;
}

