#include <iostream>
using namespace std;
int main () {
int a, b;
cout<<"ingrese ambos numeros distintos separados de enter"<<endl;
cin>>a;
cin>>b;
if(a!=b)
{	if(b>a)
{
cout<<b<<" es mayor que "<<a<<endl;
}
else {cout<<a<<" es mayor que "<<b<<endl;}
	
}

else
{
cout<<"los numeros son iguales, intente de nuevo"<<endl;
}
}
