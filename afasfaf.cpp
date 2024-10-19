#include <iostream>
using namespace std;
int main ()
{
int a;
cout<<"Ingrese el numero del mes del que desea averiguar la cantidad de dias (1-12)"<<endl;
cin>>a;

if((a=1)||(a=3)) {cout<<"el mes tiene 31 dias"<<endl;}	
else if((a=5)||(a=7)) {cout<<"el mes tiene 31 dias"<<endl;}
else if ((a=8)||(a=10)) {cout<<"el mes tiene 31 dias"<<endl;}
else if(a=12){
cout<<"el mes tiene 31 dias"<<endl;}
else if((a=4)||(a=6))
{cout<<"el mes tiene 30 dias"<<endl;}
else if((a=9)||(a=11))
{cout<<"el mes tiene 30 dias"<<endl;}
else if (a=2)
{cout<<"el mes tiene 28 dias"<<endl;}
else
{cout<<"ingrese un numero entre 1 y 12"<<endl;}
}

