/* Liste
Se da o lista: (1 2 3 4 5 6 7 8 9 19) si n=4. Sa se creeze o alta lista care sa contina lista 1, fara fiecare al 4-lea element. 
Lista 2 = (1 2 3 5 6 7 9 10)

*/
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	int n=4,i, m=13;
	int list1[13] = {1,2,3,4,5,6,7,8,9,10,11,12,13};
	int list2[10];
	
	for (int p = 0 ; p < m ; p ++)
	    if(list1[p] % n == 0) 
		{
	        for(int i = p ; i < m - 1; i ++)
	            list1[i] = list1[i+1];
	        m --;
	    }	
	
	
	for(i=0;i<10;i++)
	{
		cout << list1[i] <<" ";
	}
	
	

}
