#include <iostream>
#include <math.h>
using namespace std;
int main () {
	
double x;
int a, b, c, i, d, e, respuesta;

cout<<"ingrese el numero"<<endl;
cin>>a;
x=((a+1.0000000)/2);
b=floor(x);
for (int i=2; i<b+1; i=i+1)
{
	c=a%i;
	if (c==0)
	{
		d=a/i;
			e=e+d;	
		}
		
	}
	
if(e==0)
{
	cout<<"el numero"<< a <<"es primo"<<endl;
}
}
