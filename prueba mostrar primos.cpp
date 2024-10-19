#include <iostream>
#include <math.h>
using namespace std;
int main (){
double x;
int a, b, c, i, d, e, respuesta;
for (int a=1; a<=50; a++)
{
for (int i=2; i<a-1; i=i+1)
{
	c=a%i;
	if ((c==0))
	{
		d=a/i;
			e=e+d;	
		}
		
	}
	
if(e==0)
{
	cout<<"el numero "<< a <<" es primo"<<endl;
}
else if (e!=0)
{
	cout<<a<<" no es primo"<<endl;
	}	
}
}

