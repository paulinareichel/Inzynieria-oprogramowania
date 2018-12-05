#include <iostream>
#include <string>
#include "Decyzja.h"

using namespace std;

Decyzje::~Decyzje()
{
	;
}

Decyzje::Decyzje()
{
	;
}

void Decyzje::Wybierz_opcje()
{
	cout << "Wpisz 'tak', jesli wszystkie dane sa poprawne i ubezpieczenie obowiazuje w przypadku danej szkody. W przeciwnym wypadku wpisz 'nie'." << endl;
	Kwota = 1000;
}

