#include <iostream>
using namespace std;
int main (){
	int a, b, c;
cout<<"ingrese tres numeros separados de enter para saber si estan en orden"<<endl;
cin>>a;
cin>>b;
cin>>c;
if((a>b)&&(b>c))
{
	cout<<"los numeros: "<<a<<" ,"<<b<<" ,"<<c<<" estan en orden descendente"<<endl;
}
else if((c>b)&&(b>a))
{
	cout<<"los numeros: "<<a<<" ,"<<b<<" ,"<<c<<" estan en orden ascendente"<<endl;
}
else{cout<<"los numeros no estan ordenados"<<endl;}
}
