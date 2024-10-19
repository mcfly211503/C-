#include <iostream>
#include <math.h>
#include <cstring>
using namespace std;
void binario(int n){

	if (n>1)
	{

	binario(n/2);

	}
	cout<<n%2;
}
void fraccionaria(string cadena){
	int neg=-1, pos=0, punto=0, longitud=cadena.length();
	double counter=0.00;
	for (int j=0; j<=longitud-1; j++) //este for busca el punto decimal
	{
		if(cadena[j]=='.')
		{
			punto=j;
			cout<<"el punto esta en "<<punto<<endl;
			break;
		}
	}

pos=punto-1;
//el for que viene aqui va a hacer la suma de los positivos
for (int a=0; a<=punto-1; a++)
{
	if (cadena[a]=='1')
	{ cout<<"el exponente es "<<pos<<"el peso del "<<a<<" es "<<pow(2, pos)<<endl;
		counter+=pow(2, pos);
	}
	else{
		{ cout<<"el exponente es "<<pos<<"el peso del "<<a<<" es "<<0<<endl;
		counter+=0.00;
	}

}
pos--;
 }
//este for va a hacer la suma de los negativos desde el primero despues dle punto hasya el ultomo caracter
for(int k=punto+1; k<=longitud-1; k++)
{
	if(cadena[k]=='1')
	{
		cout<<"el exponente es "<<neg<<"el peso del "<<k<<" es "<<pow(2, neg)<<endl;
		counter+=pow(2, neg);
	}
	else
	{
		cout<<"el exponente es "<<neg<<"el peso del "<<k<<" es "<<0<<endl;
		counter+=0.00;
	}
	neg--;
}
cout<<"el numero es "<<counter<<endl;
}

int main() {
    int l=8, n;
    string cadena;
    while (l != 5) {
        cout << "Que desea hacer?" << endl
             << "1. calcular de decimal a binario 2. convertir binario fraccionario a decimal"<< endl;
        cin >> l;
        if (l == 1) {
 
            cout << "Ingrese el numero a convertir" << endl;
            cin >> n;
            binario(n);
            cout << endl;
        } else if (l == 2) {
        	       	cout<<"si el binario no tiene decimales, ingreselo como .00"<<endl;
            cout << "Ingrese el binario al que desea convertir" << endl;
            cin >> cadena;
            fraccionaria(cadena);
            cout << endl;
        }
    }
    return 0;
}
