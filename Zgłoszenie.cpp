#include "Zg�oszenie.h"
int Zg�oszenie::Id_zg�oszenia;

Zg�oszenie::Zg�oszenie()
{
	Id_zg�oszenia++;
	
	opisz_zdarzenie();
}

void Zg�oszenie::opisz_zdarzenie()
{
	cout << "Opisz zdarzenie:" << endl;
	cin >> this->opis;
}

