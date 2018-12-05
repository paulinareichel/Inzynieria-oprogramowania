#include "Pracownik.h"

using namespace std;

Pracownik::Pracownik()
{
	int id;
	cout << "Wpisz identyfikator ID: " << endl;
	cin >> id;
}

Pracownik::~Pracownik()
{
	;
}

void Pracownik::Przyjmij_zgloszenie()
{
	// 3. Uzupelnijcie, kiedy klasa juz bedzie dziedziczyæ. Dziêkujemy za wspó³pracê <3
}

bool Pracownik::Zweryfikuj_polise()
{
	// 4. ZaprzyjaŸnijcie z polis¹ czy tam coœ, i dopiszcie :D
	return true;
}

bool Pracownik::Rozpatrz_szkode()
{
	bool dec;
	if (dec = 'tak')
	{
		cout << "Odszkodowanie zostanie wyplacone!" << endl;
		return true;
	}
	else if (dec = "nie")
	{
		cout << "Odszkodowanie nie zostalo przyznane!" << endl;
		return false;
	}
	else
		cout << "Wpisany tekst nie jest poprawny. Upewnij sie, ze klawisz CapsLock nie jest wcisniety" << endl;
}

long Pracownik::Wyplac_odszkodowanie()
{
	if (Rozpatrz_szkode() == true)
	{
		cout << "Kwota odszkodowania to: " << endl;
		cin >> Kwota;
		return Kwota;
	}
	else
	{
		cout << "Brak wyplacenia" << endl;
		return 0;
	}
}