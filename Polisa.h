#include <iostream>
#include <string>
using namespace std;

class Polisa
{
protected:
	static int numer;
	int zawartosc[4];
	string data_waznosci;
public:
	Polisa();
	
	bool weryfikacja_polisy();

};
