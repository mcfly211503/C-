#include <iostream>
using namespace std;
#include <ctime>


void binario(int n){

	if (n>1)
	{

	binario(n/2);

	}
	cout<<n%2;
}
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
int main() {                  
time_t tSac = time(NULL); 
unsigned t0, t1;
t0=clock();
t1 = clock();
 int a, b, c;
double time = (double(t1-t0)/CLOCKS_PER_SEC);

struct tm* pt1 = localtime(&tSac);

cout<<"Son las "<<pt1->tm_hour%12<<":"<<pt1->tm_min<<":"<<pt1->tm_sec<<endl;
binario(pt1->tm_hour%12);
cout<<":";
binario(pt1->tm_min);
cout<<":";
binario(pt1->tm_sec);
cout<<endl;
hexa(pt1->tm_hour%12);
cout<<":";
hexa(pt1->tm_min);
cout<<":";
hexa(pt1->tm_sec);
cout<<endl;

cout<<"Ingrese separado de enter la cantidad de horas, minutos y segundos que desea sumarle a la hora actual "<<endl;
cin>>a;
cin>>b;
cin>>c;

for (int i=1; i<=86400; i++)
{ 
int hora=((pt1->tm_hour)+a)%12, minuto=((pt1->tm_min)+b)%60, segundo=((pt1->tm_sec)+c)%60;

//vamos a controlar los incrementos de hora y minuto
if (segundo==59)
{
	pt1->tm_min++;
}
if ((minuto==59)&&(segundo==59)) //doble condicion porque nuestra variable minuto va a ser 59 durande los 59 segundos del minuto 59, por eso incrementamos hasta el ultimo de esos segundos, o sea hora:59:59
{
	pt1->tm_hour++;
}

cout << "Reloj Decimal "<<endl;
if (hora==0)
{
cout<<"12";	
}
else{
	cout<< hora;
}

cout<< ":"; 
if (minuto<10)
{
cout<<"0"<<minuto;	
}
else
{
	cout<<minuto;
}
cout<< ":";
if (segundo<10)
{
cout<<"0"<<segundo;	
}
else
{
	cout<<segundo;
}




cout<< endl;
cout<<endl;



cout<<"Reloj Binario: "<<endl;
binario(hora);
cout<<":";
binario(minuto);
cout<<":";
binario(segundo);
cout<<endl;
cout<<endl;



cout<<"Reloj Hexadecimal: "<<endl;



hexa(hora);
cout<<":";
hexa(minuto);
cout<<":";
hexa(segundo);
cout<<endl;


	sleep(1);
	pt1->tm_sec++;
	system("cls");
}
}