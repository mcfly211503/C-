#include <iostream>
using namespace std;
int main(){
int deseo, opcion1, opcion2;
float c, k, f;

do{
	system ("cls");
	cout<<"ingrese la opcion de unidad de medida"<<endl;
	cout<<"1-Celsius"<<endl<<"2-Farenheit"<<endl<<"3-Kelvin"<<endl;
	cin>>opcion1;
	switch (opcion1)
	{
		case 1:
			k=0;
			c=0;
			f=0;
			cout<<"ingrese la cantitad de grados"<<endl;
			cin>>c;
			cout<<"a que unidad desea convertirlos"<<endl;
			cout<<"1-Farenheit"<<endl<<"2-Kelvin"<<endl;
			cin>>opcion2;
			switch (opcion2){
				case 1:
					f=((9*c)/5)+32;
					cout<<c<<"°C equivale a "<<f<<"° F"<<endl;
					break;
					case 2:
					k=c+273.15;
					cout<<c<<"°C equivale a "<<k<<"° k"<<endl;
					break;
			}
			break;
			case 2:
				k=0;
			c=0;
			f=0;
				cout<<"ingrese la cantitad de grados"<<endl;
			cin>>f;
			cout<<"a que unidad desea convertirlos"<<endl;
			cout<<"1-Celsius"<<endl<<"2-Kelvin"<<endl;
			cin>>opcion2;
			switch (opcion2){
				case 1:
					c=(5*(f-32))/9;
					cout<<f<<"°F equivale a "<<c<<"° C"<<endl;
					break;
					case 2:
					k=(5*(f-32)/9)+273.5;
					cout<<f<<"°f equivale a "<<k<<"° k"<<endl;
					break;
			}
			break;
			case 3:
				k=0;
			c=0;
			f=0;
		cout<<"ingrese la cantitad de grados"<<endl;
			cin>>k;
			cout<<"a que unidad desea convertirlos"<<endl;
			cout<<"1-Celsius"<<endl<<"2-Farenheit"<<endl;
			cin>>opcion2;
			switch (opcion2){
				case 1:
					c=k-273.15;
					cout<<k<<"°k equivale a "<<c<<"° C"<<endl;
					break;
					case 2:
					f=(9*(k-273.15)/5)+32;
					cout<<k<<"°k equivale a "<<f<<"° F"<<endl;
					break;
			}
				break;
	}
	cout<<"desea hacer otra conversion?"<<endl<<"1-si"<<endl<<"0-no"<<endl;
	cin>>deseo;
}
while (deseo==1);
}
