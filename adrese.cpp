#include <iostream>
using namespace std;
short a, *pa=&a;
int b, *pb=&b;
int main()
{
   cout<<"a=";cin>>a;
   cout<<"b=";cin>>b;
   cout<<"Adresa lui a este: "<<pa<<endl;
   cout<<"Adresa lui b este: "<<pb<<endl;
   pa+=2;
   cout<<"Adresa lui a, dupa adunare, este: "<<pa<<endl;
   pb-=3;
   cout<<"Adresa lui b, dupa scadere, este: "<<pb<<endl;
}
