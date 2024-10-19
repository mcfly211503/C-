#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int naleatorio(int num)
{
	int aleatorio;
	
	aleatorio=(rand()%num);
	return aleatorio;
}
int main ()
{
	srand(time(NULL));
	int par=0, imp=0, m=0;
do{
int cong=10;
m=naleatorio(100);
cout<<m<<endl;
cong=m%2;
if(cong==0)
{
	par++;

}
else{
	imp++;
	
}
cout<<" el punteo del equipo impar es "<<imp<<endl;
cout<<" el puntaje del equipo par es "<<par<<endl;
}
while ((imp<10)&&(par<10));
}
