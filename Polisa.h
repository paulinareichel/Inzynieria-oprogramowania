#include <iostream>
#include <string>
using namespace std;

class Polisa
{
protected:
	static int numer;
	int zawartosc[4];
	char data_waznosci[11];
public:
	Polisa();	
	bool weryfikacja_polisy();

};
