#include <iostream>
using namespace std;
int main (){
	char tecla;
	system ("clear");
	cout<<"El programa identificara las vocales, presione una tecla"<<endl;
	cin>>tecla;
	switch (tecla)
	{
		case'a':
			case 'e':
				case'i':
					case 'o':
							case 'u':
								cout<<"la letra ingresada es la vocal: "<<tecla<<endl;
								break;
								default :
									cout<<tecla<<" no es una vocal"<<endl;
									break;
	}
	cout<<"hasta la proxima"<<endl;
}
