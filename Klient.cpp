#include "Klient.h"


using namespace std;


Klient::~Klient()
{

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
	if (size(pes) != 11)
		cout << "Bledny pesel! Nieprawidlowa ilosc znakow" << endl;
	
}

void Klient::Odwolaj_sie_od_decyzji()
{

}