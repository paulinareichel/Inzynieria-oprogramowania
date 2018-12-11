#pragma once
#include "Klient.h"
#include "Polisa.h"
#include "Zg³oszenie.h"
#include <fstream>
#include <iomanip>
using namespace std;

class Zapis
{
public:
	static void save(Klient*, Polisa*, Zg³oszenie*);
	//friend class Klient;
};

