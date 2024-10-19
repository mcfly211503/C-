#include <iostream>
using namespace std;
int main () {
	int contador, suma, c;
	cout<<"muestra la suma de los primeros n numeros, ingrese n"<<endl;
	cin>>c;
	contador=1;
	suma=0;
	while (contador<=c)
	{
		suma=suma+contador;
		contador ++;
	}
	cout<<"la suma es "<<suma<<endl;
	cout<<"hemos terminado"<<endl;
	return 0;
}
