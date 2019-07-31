#include <iostream>
#include <stdlib.h>
#include <math.h>
using namespace std;

void interschimbare(int *pi, int *pj)
{
	int aux;
	aux=*pi;
	*pi=*pj;
	*pj=aux;
}


int main()
{ 
	int i=25;
	int j=20;

	interschimbare(&i, &j);
	cout << i << endl;
	cout << j;
	
}

