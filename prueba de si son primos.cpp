#include <iostream>
#include <math.h>
using namespace std;
int main () {
int a, b, c, i, d, e, p, respuesta;
e=0;
p=0;

	for (a=1; a<=540; a++){
	e=0;
for (int i=2; i<a-1; i++)
{
	c=a%i;
	if (c==0)
	{
e++;	
		}
		
	}
if(e==0)
{
	cout<<"el numero "<< a <<" es primo"<<endl;
	p+=1;
}

}



cout<<"hay "<<p<<" primos"<<endl;}
