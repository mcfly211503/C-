#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int naleatorio(int num)
{
	int aleatorio;
	srand(time(NULL));
	aleatorio=(rand()%num);
	return aleatorio;
}
int main ()
{
int tope;
cout<<"programa que devuelve un numero aleatorio"<<endl;
cout<<"ingrese el tope del numero aleatorio"<<endl;
cin>>tope;
cout<<"el numero generado es "<<naleatorio(tope)<<endl;
}
