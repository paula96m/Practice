#include <stdlib.h>
#include <iostream>
#include <math.h>
using namespace std;

int fact(int x)
{
	if(x<=1)
	{
		return 1; //conditie de oprire functie recursiva
	}
	else
	{
		return(x*fact(x-1)); //autoapelul functiei
	}
}
int main()
{
	int n;
	cout << "n="; cin>> n;

	cout << "n!="<< fact(n);
	
}

