#include "Application.h"


Application::Application()
{
	while (this->description.empty())
	{
		cout << "Podaj opis zdarzenia" << endl;
		cin >> this->description;
	}
}
Application::~Application()
{
	//
}

string Application::getdescription()
{
	return this->description;
}

void Application::save(Application* a, Client* c)
{
	fstream plik;
	plik.open("Applications.txt", ios::in | ios::app);
	plik << c->getpolicy() << setw(13) << right << c->getpesel() << setw(15) << right << a->getdescription() << endl;
	plik.close();
}

void Application::print(Application* a, Client* c)
{
	fstream file;
	string line;
	file.open("Baza.txt", ios::in);
	while (!file.eof()) {
		getline(file, line);
		if (!(string::npos == line.find(c->PESEL)))
			cout << line << endl;
	}
	cout << "-------------------------------------------------------------------------------" << endl;
	cout << "Numer polisy " << setw(13) << right << " | " << c->getpolicy() << endl;
	cout << "Numer pesel klienta " << setw(6) << right << " | " << c->getpesel() << endl;
	cout << "Opis zdarzenia " << setw(11) << right << " | " << a->getdescription() << endl;
	file.close();
}
