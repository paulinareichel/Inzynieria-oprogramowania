#include "Polisa.h"

int Polisa::numer;
Polisa::Polisa()
{
	numer++;
	cout << "Wybierz zawartosc polisy: /n	1.Kradziez	/n 2.Wypadek/n 3.Porwanie /n 4.Uszczerbek na zdrowiu /n 5.Koniec" << endl;
	for (int i = 0; i < 4; i++) {
		int tmp;
		cin >> tmp;
		if (tmp != 5)
			zawartosc[i] = tmp;
		else break;
	}
	cout<< "Podaj date waznosci polisy: "<<endl;
	cin >> data_waznosci;

}
