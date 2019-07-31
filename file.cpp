#include<iostream>
#include <fstream>
#include <stdlib.h>
using namespace std;

int i;
int number;

void ascending_order(char * _file, unsigned int how_many);

void generate_random_numbers(int maxim, unsigned int how_many, char * file);

int main()

{
	
	generate_random_numbers(3000, 10, "test.txt");
	ascending_order("test.txt", 8);
	
}



void generate_random_numbers(int maxim, unsigned int how_many, char * _file)
{
	int number;
	std::ofstream file_w (_file);
	for(unsigned int counter = 0; counter < how_many; counter ++)
	{
		number = rand() % maxim;
		//std:cout << number << endl;
		file_w << number << ' ';
	}
	file_w.close();
}
void ascending_order(char * _file, unsigned int how_many)
{
	int vect[how_many];
	int read;
	unsigned int counter = 0;
	std::ifstream file_r (_file);
	while(!file_r.eof())
	{
		file_r >> read;
	
		vect[counter]= read;
		counter ++;
		
		if(counter >= how_many)
		{
			break;
		}
		
	}
	file_r.close();
		
	cout << "\n\nVector: \n";
	
	for(unsigned int index = 0; index < how_many; index ++)
	{
		cout << vect[index] << ' ';
	}
	
	int aux;
	for(unsigned int i = 0; i < how_many - 1; i ++)
	{
		for(unsigned int j = i + 1; j < how_many; j++)
		{
			if(vect[i] > vect[j])
			{
				aux = vect[i];
				vect[i] = vect[j];
				vect[j] = aux;
			}
		}
	}
		
	cout << "\n\nVector sortat crescator: \n";
	
	for(unsigned int index = 0; index < how_many; index ++)
	{
		cout << vect[index] << ' ';
	}
	
    for(unsigned int i = 0; i < how_many - 1; i ++)
	{
		for(unsigned int j = i + 1; j < how_many; j++)
		{
			if(vect[i] < vect[j])
			{
				aux = vect[i];
				vect[i] = vect[j];
				vect[j] = aux;
			}
		}
	}
	
	cout << "\n\nVector sortat descrescator: \n";
	for(unsigned int index = 0; index < how_many; index ++)
	{
		cout << vect[index] << ' ';
	}

	std::ofstream file ("vector.txt");
	
	for(unsigned int index = 0; index < how_many; index ++)
	{
		file << vect[index] << ' ';
	}
	
	file.close();
	
}





