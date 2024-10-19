#include <iostream>
using namespace std;
int main (){
	int x;
	cout<<"ingrese el numero a evaluar"<<endl;
	cin>>x;
	if(x<0)
	{
		cout<<"el numero "<<x<<" es negativo"<<endl;
	}
	else if ((x>=0)&&(100>=x))
	{
		cout<<x<<" esta entre 100 y 0"<<endl;
	}
	else
	{
		cout<<x<<" es mayor a 100"<<endl;
	}
}
