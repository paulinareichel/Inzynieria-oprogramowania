#include "Klienci.h"
#include <iostream>
#include <string>

using namespace std;


Klient::~Klient()
{
	;
}

Klient::Klient() 
{
	string im;
	string naz;
	string pes;
	cout << "Podaj imie: " << endl;
	cin >> im;
	cout << "Podaj nazwisko: " << endl;
	cin >> naz;
	cout << "Wpisz nr pesel: " << endl;
	cin >> pes;
	while (size(pes) != 11)
	{
		cout << "Bledny pesel! Nieprawidlowa ilosc znakow. Wpisz pesel ponownie: " << endl;
		cin >> pes;
	}
		
	
}

void Klient::Odwolaj_sie_od_decyzji() 
{
	;
}
