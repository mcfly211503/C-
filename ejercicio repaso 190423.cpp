#include <iostream>
#include <math.h>
using namespace std;

int main (){
	int opcion, i, a, b, c, d, e, p, q, fact;
	double x, y;
	cout<<"usted posee las siguientes opciones:"<<endl<<"1. ver los primeros 100 primos, 2. ver si el año es bisiesto, 3. calcular salario nominal, 4. calculo de una serie "<<endl;
	
	do{
		cin>>opcion;
		switch (opcion)
		{
		
		case 1:
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
cout<<"hay "<<p<<" primos"<<endl;
			break;
			
case 2:
	cout<<"ingrese el año"<<endl;
	cin>>a;
	c=a%4;
	if(a==0)
	{
		cout<<a<<" es bisiesto"<<endl;
	}
	else
	{
		cout<<a<<" es no bisiesto"<<endl;
	}
	break;
	case 3:
		cout<<"ingrese las horas promedio y el salario por hora separados por enter"<<endl;
		cin>>a;
		cin>>b;
		c=a*b;
		d=c*7;
		e=30*c;
		cout<<"usted gana Q."<<c<<" diarios, Q."<<d<<" semanales y Q."<<e<<" mensuales"<<endl;
			break;
			case 4:
				fact=1;
				y=0;
				cout<<"ingrese el numero para calcular su serie"<<endl;
				cin>>e;
			for (int i=2; i<=e; i++)
			{
				a=pow(e, i);

				for (int k=1; k<=i; i++)
				{
					fact=fact*k;
				}
				x=(a+0.000)/fact;
				
				y=y+x;
			}
			cout<<"la serie es "<<1-x+y<<endl;
		break;
			}
			
			cout<<"desea hacer otra cosa? (1->si 0->no)"<<endl;
			cin>>q;
			
			
	}
	while (q==1);
	cout<<"gracias por usar el programa"<<endl;
}
