#include <iostream>
using namespace std;
int main () {
	int contador, suma;
	cout<<"muestra la suma de los primeros 100 numeros"<<endl;
	contador=1;
	suma=0;
	while (contador<=100)
	{
		suma=suma+contador;
		contador ++;
	}
	cout<<"la suma es "<<suma<<endl;
	cout<<"hemos terminado"<<endl;
	return 0;
}
