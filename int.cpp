#include<iostream>
#include <stdlib.h>
using namespace std;


int intersch(int *px, int *py)
{
	int aux = *px;
	*px = *py;
	*py = aux;
}
int main()
{
	int x=40;
	int y=80;
	intersch(&x, &y);
	cout << x <<endl;
	cout << y;
	
}

