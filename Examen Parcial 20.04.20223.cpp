#include <iostream>
#include <math.h> //no se sabe cuando se pueden necesitar mates, por si a caso
using namespace std;
int main (){
	int seleccion, desea, cliente, servicio, a, b, c, d, e, f, g, h, i, j, k, l, m, n, o, p, q, r;
	double x, y, z, w;
e=0;
f=0;
g=0;
h=0;
i=0;
j=0;
k=0;
l=0;
m=0;
n=0;
do 
{
cout<<"Que desea hacer?"<<endl<<"1:agregar cliente"<<endl<<"2:corte de caja"<<endl;
cin>>cliente;
switch (cliente){

case 1:
cout<<"ingrese la jornada en que se encuentra"<<endl<<"1:Mañana"<<endl<<"2:tarde"<<endl;
cin>>a;
if (a==1)
{
	e+=1;
	do{
cout<<"Estos son los tipos de servicios que prestamos, a continuacion seleccione el que necesita"<<endl;
cout<<"Servicio 1: Q.34.50"<<endl<<"Servicio 2: Q.35.25"<<endl<<"Servicio 3: Q20.50"<<endl<<"Servicio 4: Q.30.15"<<endl;
cin>>seleccion;
switch (seleccion)
{
	case 1:
	g+=1;
	break;
	case 2:
		h+=1;
		break;
		case 3:
			i+=1;
			break;
			case 4:
				j+=1;
				break;
				
}
cout<<"desea agregar otro servicio a este cliente?"<<endl<<"1: Si"<<endl<<"2: No"<<endl;
				cin>>servicio;
}
while (servicio==1);
}
else if (a=2)
{
	f+=1;
	do{
cout<<"Estos son los tipos de servicios que prestamos, a continuacion seleccione el que necesita"<<endl;
cout<<"Servicio 1: Q.34.50"<<endl<<"Servicio 2: Q.35.25"<<endl<<"Servicio 3: Q20.50"<<endl<<"Servicio 4: Q.30.15"<<endl;
cin>>seleccion;
switch (seleccion)
{
	case 1:
	k+=1;
	break;
	case 2:
		l+=1;
		break;
		case 3:
			m+=1;
			break;
			case 4:
				n+=1;
				break;
				
}
cout<<"desea agregar otro servicio a este cliente?"<<endl<<"1: Si"<<endl<<"2: No"<<endl;
				cin>>servicio;
}
while (servicio==1);
}
break;
case 2:
	system("cls");
cout<<"Corte de caja:"<<endl;
cout<<"Servicios de la mañana:"<<endl;
cout<<"Servicio 1:"<<endl<<"Se realizaron "<<g<< " Servicios en total, cada uno con costo de Q.34.50, se ingreso Q."<<34.5*g<<" por dicho servicio"<<endl;
cout<<"Servicio 2:"<<endl<<"Se realizaron "<<h<< " Servicios en total, cada uno con costo de Q.35.25, se ingreso Q."<<35.25*h<<" por dicho servicio"<<endl;
cout<<"Servicio 3:"<<endl<<"Se realizaron "<<i<< " Servicios en total, cada uno con costo de Q.20.50, se ingreso Q."<<20.50*i<<" por dicho servicio"<<endl;
cout<<"Servicio 4:"<<endl<<"Se realizaron "<<j<< " Servicios en total, cada uno con costo de Q.30.15, se ingreso Q."<<30.15*j<<" por dicho servicio"<<endl;
x=(34.5*g)+(35.25*h)+(20.50*i)+(30.15*j);
cout<<"Las ganancias de la mañana fueron de Q."<<x<<endl;
cout<<"Servicios de la tarde:"<<endl;
cout<<"Servicio 1:"<<endl<<"Se realizaron "<<k<< " Servicios en total, cada uno con costo de Q.34.50, se ingreso Q."<<34.5*k<<" por dicho servicio"<<endl;
cout<<"Servicio 2:"<<endl<<"Se realizaron "<<l<< " Servicios en total, cada uno con costo de Q.35.25, se ingreso Q."<<35.25*l<<" por dicho servicio"<<endl;
cout<<"Servicio 3:"<<endl<<"Se realizaron "<<m<< " Servicios en total, cada uno con costo de Q.20.50, se ingreso Q."<<20.50*m<<" por dicho servicio"<<endl;
cout<<"Servicio 4:"<<endl<<"Se realizaron "<<n<< " Servicios en total, cada uno con costo de Q.30.15, se ingreso Q."<<30.15*n<<" por dicho servicio"<<endl;
y=(34.5*k)+(35.25*l)+(20.50*m)+(30.15*n);
cout<<"Las ganancias de la tarde fueron de Q."<<y<<endl;
cout<<"En total:"<<endl<<"Se tuvieron "<<e<<" clientes en la mañana y "<<f<<"en la tarde. "<<e+f<<" Clientes con ganancias totales de Q."<<x+y<<endl<<endl;





cout<<"Servicio mas vendido de la mañana:"<<endl;
if((g>=h)&&(g>=i)&&(g>=j))
{
	cout<<"servicio 1"<<endl;
}
if((h>=g)&&(h>=i)&&(h>=j))
{
	cout<<"servicio 2"<<endl;
}
if((i>=g)&&(i>=g)&&(i>=j))
{
	cout<<"servicio 3"<<endl;
}
if((j>=g)&&(j>=i)&&(j>=h))
{
	cout<<"servicio 4"<<endl;
}



cout<<"Servicio mas vendido de la tarde:"<<endl;
if((k>=l)&&(k>=m)&&(k>=n))
{
	cout<<"servicio 1"<<endl;
}
if((l>=k)&&(l>=m)&&(l>=n))
{
	cout<<"servicio 2"<<endl;
}
if((m>=k)&&(m>=l)&&(m>=n))
{
	cout<<"servicio 3"<<endl;
}
if((n>=k)&&(n>=l)&&(n>=m))
{
	cout<<"servicio 4"<<endl;
}

o=g+k;
p=h+l;
q=i+m;
r=j+n;

cout<<"Servicio mas vendido del dia:"<<endl;
if((o>=p)&&(o>=q)&&(o>=r))
{
	cout<<"servicio 1"<<endl;
}
if((p>=o)&&(p>=q)&&(p>=r))
{
	cout<<"servicio 2"<<endl;
}
if((q>=p)&&(q>=o)&&(q>=r))
{
	cout<<"servicio 3"<<endl;
}
if((r>=p)&&(r>=q)&&(r>=o))
{
	cout<<"servicio 4"<<endl;
}

if(x>y)
{
	cout<<endl<<endl<<"La Jornada con mayor recaudo es la mañana"<<endl;
}
else if (y>x)
{
	cout<<endl<<endl<<"La Jornada con mayor recaudo es la tarde"<<endl;
}
else
{
		cout<<endl<<endl<<"Las dos jornadas recaudaron lo mismo"<<endl;
}
break;
}
cout<<"desea cerrar el programa?"<<endl<<"1:si"<<endl<<"2:no"<<endl;	
cin>>desea;
}
while (desea==2);
}



