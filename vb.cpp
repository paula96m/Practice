#include<fstream>//fisiere
#include <iostream>//cout/cin
#include <stdlib.h>
#include <string.h>
using namespace std;
int write();
int read();

int main(){
	write();
	read();
}
int write()
{
	std::ofstream fisier("doc.txt");
	fisier << "Ana"<< endl;
	fisier.close();
}
int read()
{

	int read;

	std::ifstream fisier("doc.txt");
	while(!fisier.eof())
	{
		fisier >> read;
		cout << read;
		
	}
	
	fisier.close();
	
}
