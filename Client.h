#pragma once
#include <string>
#include <iostream>
#include <fstream>
using namespace std;

class Client
{
protected:
	string PESEL;
	int policy = 0;
public:
	Client();
	~Client();
	string getpesel();
	int getpolicy();
	friend class Application;
};

