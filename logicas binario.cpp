#include <iostream>

void counter(int* binario) {
    int i = 0;
    if (binario[i] == 0) {
        binario[i] = 1;
    } else if (binario[i] == 1) {
        binario[i] = 0;
        counter(&binario[i + 1]);
    }
}

using namespace std;
int main() {
int suma=0;
int cadena[5]={0, 0, 0, 0, 0};
int cadena2[5]={0, 0, 0, 0, 0};
char tecla;
cout<<"para terminar presione la f para terminar, el contador inicial es: ";


for (int i=0; i<=4; i++)
{
	cout<<cadena[i];
}


cout<<endl;


do
{
cout<<"ingrese la letra"<<endl;
cin>>tecla;
counter(cadena);
cout<<"contador:"<<endl;
	for (int j=4; j>=0; j--)
{
	cout<<cadena[j];
}
cout<<endl;


suma=cadena[0]+cadena[1]+cadena[2]+cadena[3]+cadena[4];

if (suma==5)
{
	for (int p=0; p<=4; p++)
	
	{
		cadena[p]=0;
	}
	counter(cadena2);
}



cout<<"hemos reiniciado la cadena ";
	for (int l=4; l>=0; l--)
{
	cout<<cadena2[l];
}
cout<<" veces"<<endl;

}
while (tecla!='f');



}