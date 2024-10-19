#include <iostream>
using namespace std;
int main(){
	int a, b, c;
		cout<<"ingrese la hora en formato de 24 horas, separando hora, minuto y segundo por hora"<<endl;
		cin>>a;
		cin>>b;
		cin>>c;
		if (b<10 && c<10)
		{
	
			cout<<"la nueva hora es: "<<a<<":0"<<b<<"15:0"<<c+1<<endl;
}
else if (b>10 && c<9)
{
	cout<<"la nueva hora es: "<<a<<":"<<b<<":0"<<c+1<<endl;
}
else if (b<10 && c>9)
{
	cout<<"la nueva hora es: "<<a<<":0"<<b<<":"<<c+1<<endl;
}
else if(b>10 && c>9)
{
	cout<<"la nueva hora es: "<<a<<":"<<b<<":"<<c+1<<endl;
}

}
