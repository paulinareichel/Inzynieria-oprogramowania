#include <iostream>
#include <string>
#include "Klient.h"


using namespace std;

class Zg³oszenie 
{

	static int Id_zg³oszenia;
	string opis;
public:
	Zg³oszenie();
	void opisz_zdarzenie();
	friend class Zapis;
};


