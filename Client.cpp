#include "Client.h"

Client::Client()
{

	fstream file;
	string line;
	int number = 0;
	file.open("Baza.txt", ios::in);	
	cout << "Podaj swoj PESEL" << endl;
	while(true)
	{
	cin >> this->PESEL;
		if(size(this->PESEL) == 11) break;
		else cout << "Zly PESEL! Nieprawidlowa ilosc znakow." << endl << "Podaj swoj PESEL jeszcze raz: " << endl;
	}
	while(true)
	{
		while (!file.eof()) 
		{
			getline(file, line);
			number++;
			if (!(string::npos == line.find(this->PESEL)))
			{
				this->policy = number;
				break;				
			}
		}
		if(this->policy != 0) break;
		else 
		{
			cout << "Zly PESEL! Nie ma takiego numeru PESEL w bazie" << endl << "Podaj swoj PESEL jeszcze raz: " << endl;
			cin >> this->PESEL;
		}
	}
	file.close();
}


Client::~Client()
{
	//
}

string Client::getpesel()
{
	return this->PESEL;
}

int Client::getpolicy()
{
	return this->policy;
}
