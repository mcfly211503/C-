#include <iostream>
using namespace std;
int main () {
int a, b, c;
cout<<"ingrese los numeros distintos separados de enter"<<endl;
cin>>a;
cin>>b;
cin>>c;
if((a>b)&&(a>c))
{cout<<"el mayor es "<<a<<endl;}

if((c>a)&&(c>b))
{cout<<"el mayor es "<<c<<endl;}

if ((b>a)&&(b>c))
{cout<<"el mayor es "<<b<<endl;}

cout<<"hasta la proxima"<<endl;

}
