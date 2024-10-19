#include <iostream>
using namespace std;
int main () {
	int a;
	cout<<"ingrese el numero a evaluar, si desea salir ingrese 13"<<endl;
	cin>>a;
do {
		if (a<0)
		{
			cout<<"el numero es negativo"<<endl;
		}
		else if (a>0)
		{
			cout<<"el numero es positivo"<<endl;
		}
		else
		{
			cout<<"el numero es 0"<<endl;
		}
		cout<<"ingrese el numero a evaluar, si desea salir ingrese 13"<<endl;
	cin>>a;
	}
while (a!=13);
	
	cout<<"adios"<<endl;
	return 0;
}
