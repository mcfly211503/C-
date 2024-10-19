#include <iostream>
using namespace std;
int main (){
	int a, i, f;
	cout<<"ingrese el numero para saber su factorial"<<endl;
	cin>>a;
	if (a>0){
	
	f=1;
		for (int i=1; i<=a; i++)
		{
			f=f*i;
		}
		cout<<"el factorial de "<<a<<" es "<<f;
        }
    else if (a==0)
     {
	cout<<"el factorial de 0 es 1"<<endl;
     }
    else 
     {
	cout<<"los numeros negativos no tienen definido el factorial"<<endl;
     }
}
