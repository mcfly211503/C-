#include <iostream>
using namespace std;
int main ()
{
	string c[10]={" "," "," "," "," "," "," "," "," "," " };
	for (int i=0; i<10; i++)
	{
		cout<<"Ingrese el nombre de la casilla "<<i+1<<endl;
		cin>>c[i];
		for(int j=0; j<i; j++)
		{
			if (c[j]==c[i])
		{
		cout<<"No se pueden repetir nombres"<<endl;
		}
		}
	}
	for (int i=0; i<10; i++)
	{
		cout<<c[i]<<endl;
	}
}