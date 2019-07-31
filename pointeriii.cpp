#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	int *p1; double *p2;
	int d1 = 45; double d2 = 3.14;
	p1 = &d1; p2 = &d2;
	cout << p1<<" " << p2<<endl;
	cout << *p1<<" " << *p2<<endl;
	cout << sizeof(p1)<<" " <<sizeof(p2)<<endl;
}
