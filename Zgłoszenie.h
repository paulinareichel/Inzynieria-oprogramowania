#include <iostream>
#include <string>
#include "Klient.h"

using namespace std;

class Zg�oszenie :public Klient
{

	static int Id_zg�oszenia;
	string opis;
public:
	Zg�oszenie();
	void opisz_zdarzenie();
};


