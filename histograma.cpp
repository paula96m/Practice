#include <stdlib.h>
#include <iostream>
#include <fstream>
using namespace std;

void fisier(int max, unsigned int nr, char * file)
{
	
	std::ofstream write(file);
	for(int i=0;i<nr;i++)
	{
		write << rand() % max << " ";
	}

	write.close();
}
void histograma(unsigned int nr, char * file, int max)
{
	unsigned int j =0;
	std::ifstream read(file);
	unsigned int vect[nr];
	while(!read.eof())
	{
		int r;
		read >> r;
		vect[j]=r;
		j++;
		if(j>=nr)
		{
			break;
		}
	}
	read.close();
	cout << "\n\nHistograma: \n";
	int contor = 0;
	int cont[max];
	for(int k=0;k<=max;k++)
	{
		int c = k;
		
		for(int l=0;l<nr;l++)
		{
			if(c == vect[l]  )
	
			contor++;
		}
		cont[k] = contor;
		contor=0;
		
	}
	char a= 254;
	for(int k=0;k<=max;k++)
	
	{
		if(cont[k]!=0)
		
			cout <<k<<" apare de: "<<cont[k] <<"  ";
			for(int i=0;i<cont[k];i++)
			{
				cout << a;
			}
			cout << endl;
	}
	
	
}
int main()
{
	
	fisier(50, 1000, "hist.txt");
	histograma(1000, "hist.txt", 50);
}


