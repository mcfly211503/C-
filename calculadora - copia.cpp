#include <iostream>
#include <math.h>
using namespace std;

	void Operaciones_Basicas() {
	
	int opcion, a, salida;
	double b, c;
	opcion==0;
	cout<<"proceso de calculo de operaciones basicas"<<endl;
	cout<<"ingrese dos numeros enteros positivos"<<endl;
	cin>>a;
	cin>>b;
	cout<<"Suma: "<<a<<" + "<<b<<" = "<<a+b<<endl;
	cout<<"Resta: "<<a<<" - "<<b<<" = "<<a-b<<endl;
	cout<<"Proucto: "<<a<<" * "<<b<<" = "<<a*b<<endl;
	cout<<"Division: "<<a<<" / "<<b<<" = "<<a/b<<endl;
	cout<<"potencia: "<<a<<" ^ "<<b<<" = "<<pow(a,b)<<endl;
	cout<<"raiz: "<<a<<" ^ 1/"<<b<<" = "<<pow(a, (1/(b+0.0000)))<<endl;
	}
int main (){
int opcion, salida;
	do{
		cout<<"1.Suma, 2. Resta, 3.Multiplicacion, 4.Division. 5.Potencia, 6.raiz enesima"<<endl;
		cin>>opcion;
		switch (opcion) {
				case 1:
		Operaciones_Basicas();
			break;
		
		}
		cout<<"¿desea hacer otra operacion?"<<endl<<"1->si  Otro->no"<<endl;
		cin>>salida;
	
}
	while(salida==1);
	cout<<"hemos terminado, hasta la proxima"<<endl;
}
