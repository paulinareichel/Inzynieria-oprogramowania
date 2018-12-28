#include "Application.h"
#include "Decision.h"
int main()
{
	Client k;
	Application a;
	a.save(&a,&k);
	cout << "---------------------------------------------------" << endl;
	cout << "Pracownik: " << endl;
	Employee e;
	a.print(&a, &k);
	Decision d;
	d.save(&d, &e);
	system("pause");
	return 0;
}