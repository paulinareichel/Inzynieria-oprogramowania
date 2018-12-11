#include "Polisa.h"
#include <iostream>

int Polisa::numer;


Polisa::Polisa()
{
	int d = 0;
	numer++;
	cout << "Wybierz zawartosc polisy: \n 1.Kradziez	\n 2.Wypadek \n 3.Porwanie \n 4.Uszczerbek na zdrowiu \n 5.Koniec" << endl;
	for (int i = 0; i < 4; i++)
	{
		int tmp;
		cin >> tmp;
		if (tmp == 1 || tmp == 2 || tmp == 3 || tmp == 4)
			zawartosc[i] = tmp;
		else
			if (tmp == 5) break;
			else cout << "Bledne dane" << endl;
	}
	while (d != 1) 
	{
		cout << "Podaj date waznosci polisy[RRRR-MM-DD]\n";
		cout << "Data : ";
		cin >> data;
		if (data[4] == '-' && data[7] == '-' && ((data[5] == '0' && data[6] >= '1' && data[6] <= '9') || (data[5] == '1' && data[6] >= '0' && data[6] <= '2'))
			&& ((data[8] == '0' && data[9] >= '1' && data[9] <= '9') || (data[8] == '1' && data[9] >= '0' && data[9] <= '9') || (data[8] == '2' && data[9] >= '0' && data[9] <= '9') || (data[8] == '3' && data[9] >= '0' && data[9] <= '1'))) 		
			d = 1;
		
		else
			cout << " Bledna data" << endl;		
	}	
}

bool Polisa::weryfikacja_polisy(int n) {
	return true;
}

