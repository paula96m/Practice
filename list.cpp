/* Liste
Se da o lista: (1 2 3 4 5 6 7 8 9 19) si n=4. Sa se creeze o alta lista care sa contina lista 1, fara fiecare al 4-lea element. 
Lista 2 = (1 2 3 5 6 7 9 10)

*/
#include <stdlib.h>
#include <iostream>
using namespace std;
int main()
{
	int n=4,i,j=0;
	int list1[10] = {1,2,3,4,5,6,7,8,9,10};
	int list2[10];
	for(i=0;i<10;i++)
	{
		if(!(i%(n-1) == 0) || i==0)
		{
			list2[j] = list1[i];
			
			j++;
			
		}
		
	}
	
	for(i=0;i<8;i++)
	{
		cout << list2[i] <<endl;
	}
	
	

}
