#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int opcion, a, b, salida;
	double c;
	opcion==0;
	do{
		cout<<"1.Suma, 2. Resta, 3.Multiplicacion, 4.Division. 5.Potencia, 6.raiz enesima"<<endl;
		cin>>opcion;
		switch (opcion) {
				case 1:
			cout<<"ingrese ambos numeros separados por enter"<<endl;
			cin>>a;
			cin>>b;
			cout<<"el resultado es "<<a+b<<endl;
			break;
		case 2:
	cout<<"ingrese ambos numeros separados por enter"<<endl;
			cin>>a;
			cin>>b;
			cout<<"el resultado es "<<a-b<<endl;
			break;
			
			case 3:
			cout<<"ingrese ambos numeros separados por enter"<<endl;
			cin>>a;
			cin>>b;
			cout<<"el resultado es "<<a*b<<endl;
			break;
			
			case 4:
				cout<<"ingrese ambos numeros separados por enter"<<endl;
			cin>>a;
			cin>>b;
			cout<<"el resultado es "<<a/b<<endl;
			break;
			
			case 5:
			cout<<"ingrese ambos numeros separados por enter (el primero la base y luego el exponente)"<<endl;
			cin>>a;
			cin>>b;
			cout<<"el resultado es "<<pow(a, b)<<endl;
			break;
			
			case 6:
				cout<<"ingrese ambos numeros separados por enter (el primero la base y luego el indice)"<<endl;
			cin>>a;
			cin>>b;
			c=1.00000/b;
			cout<<"el resultado es "<<pow(a, c)<<endl;
			break;
		}
		cout<<"¿desea hacer otra operacion?"<<endl<<"1->si  Otro->no"<<endl;
		cin>>salida;
	
}
	while(salida==1);
	cout<<"hemos terminado, hasta la proxima"<<endl;
}
