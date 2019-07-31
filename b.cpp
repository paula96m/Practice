#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	
	int v[10];
	int i,j;
	int suma = 0;
	int p = 1;
	int n=4;
	
	for (i=1;i<=n;i++)
	{
		cout<<"v["<<i<<"]=";
		cin >> v[i];
		
	}
	for (i=1;i<=n;i++)
    {
      cout<<"v["<<i<<"]="<<v[i]<< endl;
      suma+=v[i];
      p*=v[i];
      
    }
    cout << "suma este:" << suma << endl;
    cout << "produsul este:" <<p << endl;
    
    // interschimbare
    int aux;
    for (i=1;i<=n-1;i++){
	
    	for (j=i+1;j<=n;j++)
    	{
    		if(v[i] > v[j])
    		{
    			aux = v[i];
    			v[i] = v[j];
    			v[j] = aux;
			}
		}
	}
    cout << "vectorul sortat crescator este:" << endl;
    
    for (i=1;i<=n;i++)
    {
      cout<<"v["<<i<<"]="<<v[i]<< endl;
    }
    
}
