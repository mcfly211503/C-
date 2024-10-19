#include <iostream>
using namespace std;
int main (){
	int a, b, c, d;
	cout<<"cuantos numeros quiere ingresar para ser sumados?"<<endl;
	cin>>a;
	b=1;
	d=0;
	while (b<=a)
	{
		cout<<"ingrese el numero #"<<b<<endl;
		cin>>c;
		d=d+c;
		b ++;
	}
	cout<<"la suma es "<<d<<endl;
}
