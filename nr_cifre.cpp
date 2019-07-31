#include<iostream>
using namespace std;
///Cate cifre are un numar n

int nr_cifre(int x)
{
	if(x<=9)
	{
		return 1;
	}
	else
	{
		return nr_cifre(x/10)+1;
	}
}
int max(int x)
{
	if(x<=9)
	{
		return x;
	}
	else
	{
		int m = max(x/10);
		if(m>x%10)
		{
			return m;
			
		}
		else
		{
			return x%10;
		}
	}
}


int main()
{
	int n;
	cin >> n;
 	cout << "nr de cifre: "<< nr_cifre(n)<<endl;
 	cout <<"cifra maxima: "<< max(n);
 	
 	
}
