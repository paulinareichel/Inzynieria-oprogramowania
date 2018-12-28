#include "Decision.h"

Decision::Decision()
{

	bool check = false;	
	cout << "Czy polisa jest wazna?" << endl;
	cin >> this-> current;
	while (check == false)
	{
		if (this->current != "tak")
		{
			cout << "Polisa jest nieaktualna" << endl;
			this->content = "nieaktualna";
			this->amount = 0;
			check == true;
			break;
		}
		else
		{
			cout << "Zawartosc polisy pokrywa opis zdarzenia?" << endl;
			cin >> this->content;
			if (this->content != "tak")
			{
				cout << "Polisa nie pokrywa opisanego wypadku"<<endl;
				this->amount = 0;
				check == true;
				break;
			}
			else
			{
				cout << "Kwota przyznana klientowi: " << endl;
				cin >> this->amount;
				check = true;
				break;
			}
		}
	}
}


Decision::~Decision()
{
	//
}

string Decision::getcurrent()
{
	return this->current;
}

string Decision::getcontent()
{
	return this->content;
}

int Decision::getamount()
{
	return this->amount;
}

void Decision::save(Decision* d, Employee* e)
{
	fstream file;
	file.open("Decisions.txt", ios::out | ios::app);
	file << d->getcurrent() << setw(5) << right << d->getcontent() << setw(5) << right << d->getamount() <<setw(15)<<right<< e->getid()<< endl;
	file.close();
}
