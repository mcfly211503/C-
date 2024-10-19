#include <iostream>
using namespace std;
void hexa(int n){

	if (n>1)
	{

	hexa(n/16);

	}
	int cong=n%16;
	if (cong<10)
	{
	cout<<cong;	
	}
	else if (cong==10){
		cout<<"A";
	}
	else if (cong==11){
		cout<<"B";
	}
	else if (cong==12){
		cout<<"C";
	}
	else if (cong==13){
		cout<<"D";
	}
	else if (cong==14){
		cout<<"E";
	}
	else if (cong==15){
		cout<<"F";
	}
	
}
int main (){
	int a;
	int x=1;

	while (x!=0)
	{
	cout<<" Si desea convertir de hexadecimal a decimal ingrese 1 y luego el hexadecimal separados por enter, para salir ingrese 0"<<endl;
	cin>>x;
	
	switch (x)
	{
		case 0: 
		       break;
		case 1:
		cin>>a;
  	cout<<endl;
	hexa(a);
	break;
	}
	

	}
}