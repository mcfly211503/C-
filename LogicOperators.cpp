#include <iostream>
using namespace std;
bool con (bool a, bool b)
{
	bool c= a && b;
	return c;
}
bool dis (bool a, bool b)
{
	bool c= a || b;
	return c;
}
bool imp (bool a, bool b)
{
	bool c= (!a) || b;
	return c;
}
bool dimp (bool a, bool b)
{
	bool c= (a && b) || (!b && !a);
	return c;
}
int main (){
	int k=1, cantidad, cant, cong=0, importante;
	int respuesta;
	bool p[8]={1, 1, 1, 1, 0, 0, 0, 0};
	bool q[8]={1, 1, 0, 0, 1, 1, 0, 0};
	  bool r[8]={1, 0, 1, 0, 1, 0, 1, 0};
	  cout<<"nuestros operadores seran estos:"<<endl;
	  cout<<"Negacion: escribir la letra en mayuscula"<<endl;
	  cout<<"Conjuncion: &   "<<endl;
	  cout<<"Disyuncion: @   "<<endl;
	  cout<<"Implicacion: =  "<<endl;
	  cout<<"Doble implicacion: #    "<<endl;
	  cout<<endl;
	  cout<<"cuantos catacteres tiene en total la operacion?"<<endl;
	  cin>>cant;
	  	  char operacion[6][cant];
{
	for (int am=0; am<=cant-1; am++)
	{
		for (int aa=0; aa<=5; aa++)
		{
			operacion[aa][am]='x';	
		}
}
}
	  cout<<"a continuacion, ingrese la operacion caracter por caracter, sin espacios"<<endl<< "y con signos de agrupacion, cada operador debe ir rodeado de signos de agrupacion, no se permiten operadores anidados."<<endl; 
	cout<<"nuestra jerarquÃ­a de operaciones resolverÃ¡ de izquierda a derecha agrupando pares de proposiciones bajo un operador binario"<<endl;
	 int counter=0, counterprop=0, counterope=0; //los counter nos permitiran saber el numnero de caracteres, de proposiciones y de operadores de la expresion
	 char cadenaprop[cant], cadenaope[cant];
	 int caracnorm=0; //este cuenta la cantidad de caracteres normales
	  for (int pe=0; pe<=cant-1; pe++){
	  
for (int l=0; l<=cant; l++)
{
	cadenaprop[l]=='x';
	cadenaope[l]=='x';
	//vamos a definir cadenas de solo proposiciones y de solo operadores, primero les ponemos x a todos los caracteres para luego descartarlos, como hicimos en la declaracion de nuevacadena, es como descartar aquellos valores que no han sido reescritos, por lo tanto podriamos considerarlos como en blanco
}
	{ 
		cong=pe%2;
		if (cong==0)
	  		{
	  			 cout<<"ingrese el caracter"<<endl;
							cin>>operacion[0][pe]; 
							counter++;
							caracnorm++;
							
							
							
							cadenaprop[counterprop]=operacion[0][pe];
							counterprop++;
							
								}
			  
	  		else if(cong==1)
			  {
			  cout<<"ingrese el operador"<<endl;
							cin>>operacion[0][pe];
							counter++;
							
							
							cadenaope[counterope]=operacion[0][pe];
							counterope++;
							 }
						
					
			  }}
			  char nope[counterope], nprop[counterprop];
		cout<<"las cadenas de variables y operadores son"<<endl;
	
		
		for(int mm=0; mm<=counterope-1; mm++)
		{
		
	   if(cadenaope[mm]!='x')
		{
			nope[mm]=cadenaope[mm];
		}
	}
		
			for(int mm=0; mm<=counterprop-1; mm++)
		{
		
	   if(cadenaprop[mm]!='x')
		{
			nprop[mm]=cadenaprop[mm];
		}
	}	    	  
		//ahora nope es la cadena de operadores y nprop la de proposiciones
		
	for (int i=0; i<=counterprop-1; i++)
	{
	
cout<<"["<<i<<"]= "<<nprop[i]<<endl;
	}
//para ver si la cadena de proposiciones esta en orden

bool variablestrabajables[8][counterope+1];
//en esta matriz aconmodamos las tablas que tienen los resultados de cada operacion binaria, por eso el numeor de columnas es el mismo que la cantidad de operadores
int cong12;
for (int k=0; k<=counterprop-1; k++)
{
	 if(nprop[k]=='p')
		{
		for (int cc=0; cc<=7; cc++)
		{
		variablestrabajables[cc][k+1]=p[cc];
		}	
		}
			else if(nprop[k]=='P')
			{
				for (int cc=0; cc<=7; cc++)
		{
		variablestrabajables[cc][k+1]=!p[cc];
		}
			}
	
	
		else if(nprop[k]=='q')
		{
		for (int cc=0; cc<=7; cc++)
		{
		variablestrabajables[cc][k+1]=q[cc];
		}	
		}
			else if(nprop[k]=='Q')
			{
				for (int cc=0; cc<=7; cc++)
		{
		variablestrabajables[cc][k+1]=!q[cc];
		}
			}
				else if(nprop[k]=='r')
				{
					for (int cc=0; cc<=7; cc++)
		{
		variablestrabajables[cc][k+1]=r[cc];
		}
				}
					else if(nprop[k]=='R')
					{
						for (int cc=0; cc<=7; cc++)
		{
		variablestrabajables[cc][k+1]=!r[cc];
		} 
	 }
	 
	 }
		
		
bool cadenaresultado[8][((cant-1)/2)];

for (int i=0; i<=7; i++)
{
		cadenaresultado[i][0]=variablestrabajables[i][1];
}


for (int j=1; j<=((cant-1)/2); j++)
{
	if (nope[j-1]=='=')
	{
	for (int i=0; i<=7; i++)
	{
		cadenaresultado[i][j]=imp(cadenaresultado[i][j-1], variablestrabajables[i][j+1]);
		}	
	}
	else if (nope[j-1]=='#')
	{
		for (int i=0; i<=7; i++)
	{
		cadenaresultado[i][j]=dimp(cadenaresultado[i][j-1], variablestrabajables[i][j+1]);
		}
	}
		else if (nope[j-1]=='&')
	{
	for (int i=0; i<=7; i++)
	{
		cadenaresultado[i][j]=con(cadenaresultado[i][j-1], variablestrabajables[i][j+1]);
		}	
	}
		else if (nope[j-1]=='@')
	{
	for (int i=0; i<=7; i++)
	{
		cadenaresultado[i][j]=dis(cadenaresultado[i][j-1], variablestrabajables[i][j+1]);
		}	
	}
	
	  }	 
		
	
	
		
	
	
	int l=0;
	char nuevacadena[counter];
for (int a=0; a<=cant; a++) 
{ for (int b=0; b<=5; b++)
	{   if(operacion[b][a]!='x')
		{
			nuevacadena[l]=operacion[b][a];
			l++;
		 } 
		 }  
		 }
	
//a partir de este momento vamos a lidiar con un array unidimensional, mucho mas facil de trabajar, ese array serÃ¡ nuevacadena
//todo el trabajp que acabamos de hacer fue solo para tener una cadena unidimensional, lo que viene a partir de ahora sirve para manipularla
cout<<" p | q | r | ";
for (int bb=0; bb<=counter-1; bb++)
{cout<<nuevacadena[bb]<<" ";
}
cout<<"  resultado:"<<endl;

for (int j=0; j<=7; j++)
{
	cout<<" ";
	cout<<p[j];
	cout<<" | ";
	cout<<q[j];
	cout<<" | ";
	cout<<r[j];
		cout<<" |  ";
			for (int k=1; k<=counterprop; k++)
{
cout<<variablestrabajables[j][k]<<"  ";

}
cout<<"| ";
cout<<cadenaresultado[j][((cant-1)/2)];		
cout<<endl;
}

 


	
		       

 }
