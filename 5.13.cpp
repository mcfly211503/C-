#include <iostream>
using namespace std;
int main ()
{
	int a, b, c;
	cout<<"ingrese el numero a evaluar"<<endl;
	cin>>a;
	if((a>=30)||(a<0))
	{
		cout<<" el numero es 30, mayor a 30, o negativo"<<endl;
	}
	else if((a==0)||(a==1))
	{
		cout<<"el numero es 0 o la unidad"<<endl;
	}
	else {
	cout<<"el numero es primo, compuesto o potencia de dos"<<endl;
	}
	
}
