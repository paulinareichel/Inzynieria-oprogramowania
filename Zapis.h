#pragma once
#include "Klient.h"
#include "Polisa.h"
#include "Zg�oszenie.h"
#include <fstream>
#include <iomanip>
using namespace std;

class Zapis
{
public:
	static void save(Klient*, Polisa*, Zg�oszenie*);
	//friend class Klient;
};

