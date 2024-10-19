#include <iostream>
#include <math.h>
using namespace std;
int main (){
	int a, b, c, d;
	cout<<"ingrese el numero para calcular sus potencias"<<endl;
	cin>>a;
	cout<<"ingrese el valor limite de las potencias"<<endl;
	cin>>b;
	d=log(b)/log(a);
	c=1;
	for(int i=0; i<=d; i++)
	{
		c=c*a;
	
		cout<<a<<"^"<<i<<"="<<c/a<<endl;
	}
}
