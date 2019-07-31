#include <stdlib.h>
#include <iostream>
#include <string.h>
using namespace std;
void afisare1(char *s)
{
	int k;
	for(k=0; s[k]; ++k)
	{
		cout << s[k];
	}
}
void afisare2(char *ss)
{
	while(*ss)
	{
		cout << *ss++;
	}
	
		
	
}



int main()
{
	int i;
	char sir[10];
	gets(sir);
//	for(i=0;i<10;i++)
//	{
//		cout << "sir"<<"["<<i<<"]"<<"="<< sir[i]<<endl;
//	}

	afisare1(sir);
	cout <<endl;
	afisare2(sir);
}
