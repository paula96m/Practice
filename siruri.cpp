#include <string.h>
#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	char sir[10];
	cout << "introduceti sirul"<< endl;
	cin >> sir;
	cout << sir;
	//cautare caracter in sir si afisarea pozitiei lui
	char c;
	cout << "introduceti un caracter de cautat"<<endl;
	cin >> c;
	char *p;
	int poz;
	p = strrchr(sir,c);
	poz=p-sir;
	cout <<"pozitia este:"<< poz << endl;
}
