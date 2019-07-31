#include<iostream>
using namespace std;
#include <math.h>

#include<stdlib.h>

int main()
{
	int n,i;
	int sum =0;
	cout << "Introduceti un numar:\nn=";
	cin >> n;
	for(i=0; i<=n; i++)
	{
		sum+=i;	
	}
	cout << sum << endl;
	int sum_par = 0;
	for(i=0; i<=2*n; i++)
	{
		if(i%2==0)
		{
			sum_par+=i;
		}	
	}
	cout << sum_par << endl;
	
	//n!
	
	int factorial = 1;
	for(i=1; i<=n; i++)
	{
		factorial*=i;	
	}
	cout << factorial;
	
	//interschimbare
	int m, aux;
	cout << "Introduceti un numar:\nm=";
	cin >> m;
	cout << "n="<< n  << endl << "m=" << m << endl;
    aux = n;
	n = m;
	m = aux;
	
	cout << "n="<< n  << endl << "m=" << m << endl;
	
	//suma de puteri
	int rezultat=0;
	for(i=1; i<=n; i++)
	{
		rezultat+=pow(i,i);	
	}
	cout << rezultat << endl;
	
}
