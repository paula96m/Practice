#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
	
   int i, j, m, n, M[10][10], suma;
   cout<<"Introduceti numarul de linii: m=";
   cin>>m;
   cout<<"Introduceti numarul de coloane: n=";
   cin>>n;
   suma=0;
   cout<<"Introduceti numerele:"<<endl;
   for (i=0;i<m;i++)
     for (j=0;j<n;j++)
      {
      cout<<"M["<<i<<"]["<<j<<"]=";cin>>M[i][j];
      suma=suma+M[i][j];
      }
   
   cout << "matricea este:" << endl;
   for (i=0;i<m;i++)
     for (j=0;j<n;j++)
      {
      cout<<"M["<<i<<"]["<<j<<"]=";
	  cout << M[i][j] << endl;
      
      }
	cout<<"Suma elementelor matricii este: "<<suma<<endl;
}
 
