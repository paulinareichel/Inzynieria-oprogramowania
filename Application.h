#pragma once
#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>
#include "Client.h"
using namespace std;

class Application
{
	string description;

public:
	Application();
	~Application();
	string getdescription();
	void save(Application*, Client*);
	void print(Application*, Client*);
};

