#include "Polisa.h"

int Polisa::numer;
Polisa::Polisa()
{
	numer++;
	cout << "Wybierz zawartosc polisy: \n 1.Kradziez \n 2.Wypadek \n 3.Porwanie \n 4.Uszczerbek na zdrowiu \n 5.Koniec" << endl;
	for (int i = 0; i < 4; i++) {
		int tmp;
		cin >> tmp;
		if (tmp == 1 || tmp == 2 || tmp == 3 || tmp == 4)
			zawartosc[i] = tmp;
		else
			if (tmp == 5) break;
			else cout << "Bledne dane" << endl;
	}	
	cout << "Podaj date waznosci polisy[RRRR-MM-DD]\n";
	cout << "Data : ";
	cin >> data;	
}
