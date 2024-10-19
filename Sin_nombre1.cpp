#include <iostream>
using namespace std;
int suma (int a, int b){

int total;
total=a+b;
return total;
}
int main (){
	int x, y, to;
	cout<<"ingrese los numeros separados de enter"<<endl;
	cin>>x;
	cin>>y;
	to=suma(x, y);
	cout<<"el resultado es "<<to;
}
