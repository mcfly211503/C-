#include <iostream>
using namespace std;
int main ()
{
	int a, m=0, mm=0, ind, c[10]={87, 1, 2, 3, 4, 5, 6, 7, 8, 9}, d[10]={1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
for (int i=0; i<10; i++)
	{
		cout<<"Ingrese el numero de la casilla "<<i+1<<endl;
		cin>>c[i];
		if (c[i]>m)
		{
			m=c[i];
		}
		
			if (i>0)
			{
				for(int j=0; j<i; j++)
		
			if (c[i]==c[j])
			{
				d[i]=d[i]+1;
			}
		
	
			}
	}
	
	for (int k=0; k<10; k++)
	{
		if (d[k]>mm)
		{
			
			mm=d[k];
			ind=k;
		}
	}
	cout<<"El mayor es: "<<m<<endl;
	for (int i=0; i<10; i++)
	{
		cout<<c[i]<<endl;
	}
	cout<<"El mas repetido es "<<c[ind]<<" que se repite "<<d[ind]<<" veces"<<endl;
	int x;
	cin>>x;
	
}