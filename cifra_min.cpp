#include <iostream>
#include <stdlib.h>
using namespace std;
int minim(int x)
{
	if(x<=9)
	{
		return x;
		
	}
	else
	{
		int c = minim(x/10);
		if(c<x%10)
		{
			return c;
		}
		else
		{
			return x%10;
			
		}
	}
}
int nr(int x)
{
	if(x<=9)
	{
		return 1;
	}
	else
	{
		
		return nr(x/10)+1;
	}
}


int main()
{
	int n;
	cin >> n;
	cout << minim(n);
	cout << endl;
	cout << nr(n);
}
