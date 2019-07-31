#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int i;
	char sir1[100];
	char sir2[100];
	char sir3[100];
	cout << "introduceti sirul 1 de caractere:" << endl;
	cin.get(sir1,20);
	cin.get();//pentru a putea citi al doilea sir de caractere
	cout << "introduceti sirul 2 de caractere:" << endl;
    cin.get(sir2,20);		
//	
//	cout << "sirul estee:" << sir <<endl;
//	int l=strlen(sir);
//    cout<<"Lungimea sirului de caractere este: "<<l<<endl;
//    strupr(sir);
//    cout<<"Noul sir de caractere este: "<<sir<<endl;
//    strlwr(sir);
//    cout<<"Noul sir de caractere este: "<<sir<<endl;

    strcat(sir1, sir2) ; //al doilea sir se adauga la primul, al 2-lea ramane neschimbat
    cout << sir1 << endl;
    cout << sir2 << endl;
    strcpy(sir3,sir2); //copiere sir 2 in sir 3.
    cout << "sirul 3 este:" << endl;
    cout << sir3 << endl;
    
}
