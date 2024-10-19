#include <iostream>
using namespace std;
int main() {
	int a;
	cout<<"ingrese la tecla solicitada"<<endl;
	cin>>a;
do {
		cout<<"hola"<<endl;
		cout<<"ingrese la tecla solicitada"<<endl;
	cin>>a;
	}	
	while (a==1);
	cout<<"tecla incorrecta"<<endl;
	return 0;
}
