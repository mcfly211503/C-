#include <iostream>
#include <stdio.h>
#include <string>
#include <cstdlib>
#include <cmath>
#include <complex>
using namespace std;
int main () {
	int deseo1, messi, asd, tipo, grado, cantidad2, cantidad3, num1, num2,num3, a, b2, res, jk, a0, b0, qr, xy, ej, aj, ij, uj, ae, ds, mbb, olv;;
	float e, f, g, h, i, b, c, d, x, j;
	double st, sol1, sol2;
	string deseo;
	cout<<"que tipo de ecuacion necesita resolver=?"<<endl;
	cout<<"1->Ecuacion general de una variable"<<endl;
	cout<<"2-> ecuacion diofantica"<<endl;
	cin>>deseo1;
	switch (deseo1){
	case 1:
{cout<<"¿De que grado es la ecuacion a resolver?"<<endl;
        cin>>asd;
        switch(asd){
			case 1:
        cout<<"introduzca el coeficiente en X"<<endl;
        cin>>b;
       cout<<"ingrese el coeficiente independiente"<<endl;
        cin>>c;
        e=(-c)/b;
        cout<<"La solucion a la ecuacion es "<< e <<endl;

      break;
	   case 2:{

                    cout<<"introduzca el coeficiente en X^2" <<endl;
	   cin>>b;
                cout<<"introduzca el coeficiente en X" <<endl;
        cin>>c;
        cout<<"ingrese el coeficiente independiente" <<endl;
        cin>>d;
        e=(c*c)-4*b*d;
        if(e>0){
        x=sqrt(e);
g=(-c+x)/(2*b);
f=(-c-x)/(2*b);
cout<<"su primera solucion es "<< g<<endl;
cout<<"su segunda solucion es "<< f<<endl;
   break;}
   if (e<0){
x=sqrt(-e);
h=(x)/(2*b);
i=(-c)/(2*b);
std::complex<double> mycomplex(i, -h);
cout<<"la solucion 1 es un numero complejo con:"<<endl;
  cout << "Real part: " << real(mycomplex) << endl;
  cout << "Imaginary part: " << imag(mycomplex) << endl;
  std::complex<double> mycomplex2(+i, h);
cout<<"la solucion 2 es un numero complejo con:"<<endl;
  cout << "Real part: " << real(mycomplex2) << endl;
  cout << "Imaginary part: " << imag(mycomplex2) << endl;
break;
		}


		}
   default: cout<<"Solo se admiten ecuaciones lineales y cuadráticas... por el momento"<<endl;
        }
        break;
}
case 2: {cout<<"de que grado es la ecuacion diofantica a resolver?"<<endl;
	cin>>grado;
	switch(grado){
case 1:{
    cout<< "la ecuacion a resolver sera del tipo ax+by=z"<<endl;
    cout << "Ingrese el primer coeficiente (a): \n";
    cin >> num1;
    cout << "Ingrese el segundo coeficiente (b): \n";
    cin >> num2;
    cout << "Ingrese el tercer coeficiente (z): \n";
    cin >> num3;
    a = std::max(num1,num2);
    b2 = std::min(num1,num2);
    do {
        res = b2;
        b2 = a%b2;
        a = res;
    } while (b2!=0);

  jk=num3%res;
  cout<<"el residuo de dividir z= " <<num3<<" entre el mcd(a,b)=" <<res<<", sera: "<<jk<<endl;
jk=num3%res;
if(jk == 0)
    {
        cout << "la ecuacion tiene soluciones"<<endl;
        cout<<"el maximo comun divisor de a y b se puede expresar como:"<<endl;
        for(int i=-num1; i <num1+1; i++)
    {qr=res-(num2*i);
    st=qr%num1;
    xy= (qr/num1);

        cout<<"m="<<xy<<", n="<<i<<", x="<<st<<endl;}
        cout<<"ingrese el valor de ´m´ ( de preferencia aquella cuyo valor absoluto sea minimo) y para el cual x=0"<<endl;
        cin>>ej; //esto es el alpha de a0
        cout<<"ingrese el valor de ´n´ que corresponde a dicho valor de ´a´"<<endl;
        cin>>aj; //esto es beta de b0
        a0=(num3/res)*ej;
        b0=(num3/res)*aj;
		cout<<"las soluciones seran de la forma:"<<endl;
		cout<<a0<<"+("<<num2<<"/"<<res<<")t, para algún numero t"<<endl;
cout<<b0<<"-("<<num1<<"/"<<res<<")t, para algún numero t"<<endl;

cout<<"desea ver algunas de las soluciones numericas? (responda ´si´ o ´no´)"<<endl;
cin>>deseo;
if(deseo=="si"){
	cout<<"cual es el primer valor de ´´t´ que desea ver?"<<endl;
	cin>>cantidad2;
cout<<" cual es el ultimo valor de ´t´ que desea ver?"<<endl;
cin>>cantidad3;
cout<<"Las duplas (x,y) seran:"<<endl;
for (int i=cantidad2; i<cantidad3 +1; i++){
sol1=a0+((num2/res)*i);
sol2=b0-((num1/res)*i);
	cout<<"("<<sol1<<","<<sol2<<")"<<endl;}
}
else {cout<<"gracias por usar el programa"<<endl;}
}
       else {cout<<"la ecuacion no tiene soluciones"<<endl;}
	   break;}
case 2:
	{cout<<"seleccione el tipo de ecuacion:"<<endl;
	cout<<"1->x^2-y^2=z"<<endl;
	cin>>tipo;
	switch(tipo){
		case 1:
cout<<"la ecuacion a resolver será del tipo x^2-y^2=z"<<endl;
    cout << "Ingrese el tercer coeficiente (z)";
    cin >> num3;
    jk=floor((num3+1)/2);
for (int i=1; i<jk+1; i++)
{qr=num3%i;
xy=num3/i;
cout<<"z="<<num3<<"="<<xy<<"*"<<i<<"+"<<qr<<endl;
}
cout<<"cuantos de estos resultados tienen residuo 0?"<<endl;
cin>>ij;
}
cout<<"ingrese uno por uno, las duplas de factores (a,b) con residuo 0. Como primera respuesta ingrese a, como segunda ingrese b"<<endl;
for (int i=1; i<ij+1; i++)
{
cout<<"´a´,dupla "<<i<<endl,
cin>>a0;
cout<<"´b´, dupla "<<i<<endl;
cin>>b0;
ae=a0%2;
ds=b0%2;
if(ae==ds){
cout<<"la ecuacion tiene solucion"<<endl;
mbb=(a0+b0)/2;
olv=(a0-b0)/2;
cout<<"la dupla solucion (x,y) sera: ("<<mbb<<","<<olv<<")"<<endl;
	}
	else {
cout<<"la ecuacion no tiene solucion, o no la tiene para esta dupla."<<endl;
		}
}}}
break;
}

default:
	{cout<<"debe ingresar un numero entre 1 y 2. ¿desea intentarlo de nuevo?"<<endl;
	cout<<"1->Si"<<endl;
cout<<"0->No"<<endl;
cin>>messi;
if(messi==1){
  ;}
     while(messi==1);
	break;}
}
    system("pause");
        return 0;
}



