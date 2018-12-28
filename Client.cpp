#include "Client.h"

Client::Client()
{

	fstream file;
	string line;
	int number = 0;
	file.open("Baza.txt", ios::in);	
	cout << "Podaj swoj PESEL" << endl;
	cin >> this->PESEL;
		while (!file.eof()) {
			getline(file, line);
			number++;
			if (!(string::npos == line.find(this->PESEL))) 
				this->policy = number;
				//cout << this->policy;									
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