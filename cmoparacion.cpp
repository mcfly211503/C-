#include <iostream>
using namespace std;
void comparacion(int a)
{
	if((a>=0)&&(a<=9))
	{
		cout<<"el numero es dígito"<<endl;
	}
	else 
	{
		cout<<"el numero no es digito"<<endl;
	}
}
int main (){
	int x;
	cout<<"ingrese el numero a evaluar"<<endl;
	cin>>x;
	comparacion(x);
	
}
