#include <iostream>
#include <cstdlib>
#include <cmath>
#include <complex>
using namespace std;
int main (){
	int a, b, c, d, e, f, g, h;
cout<<"cual será el primer numero"<<endl;
cin>>a;
cout<<"cual sera el ultimo numero"<<endl;
cin>>b;
c=1979*((a+b)*(b-a+1))/2;
d=((b+1)*(b)*((2*b)+1))/6;
e=a-1;
f=((e+1)*(e)*((2*e)+1))/6;
g=d-f;
h=g+c;
cout<<"la suma lineal es:"<<c<<endl;
cout<<"la suma cuadratuca es:"<<g<<endl;
cout<<"la resta entre lineal y cuadratica es"<<h<<endl;
   system("pause");
        return 0;
}
