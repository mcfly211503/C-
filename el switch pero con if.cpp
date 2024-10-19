#include <iostream>
using namespace std;
int main (){
char l;
cout<<" ingrese la letra a ser identificada "<<endl;
cin>>l;
 if((l=='a')||(l=='A')||(l=='e')||(l=='E')||(l=='i')||(l=='I')||(l=='o')||(l=='O')||(l=='u')||(l=='U'))
 {
 		cout<<"la letra ingresada es la vocal: "<<l<<endl;
 }
 else 
 {
 		cout<<l<<" no es una vocal"<<endl;
 }
 	cout<<"hasta la proxima"<<endl;
}
