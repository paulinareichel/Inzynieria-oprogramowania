
#include "Zapis.h"
#include <iostream>

int main()
{

	Klient kl;
	Polisa pol;
	Zg³oszenie zgl;
	Zapis::save(&kl, &pol, &zgl);
	system("PAUSE");
	return 0;
}