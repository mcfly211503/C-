#include <iostream>
#include <iomanip>
#include <conio.h>
#include <Windows.h>
using namespace std;
void setCursorPosition(const int x, const int y){
	COORD position= { x, y};
	SetConsoleCursorPosition (GetStdHandle(STD_OUTPUT_HANDLE), position);
}
int main (){
	
			cout<<"       "<<"   A     "<<"B     "<<"C     "<<"D     "<<"E     "<<"F     "<<"G     "<<"H     "<<endl;
		for (int k=1; k<=8; k++)
		{
	cout<<"       ";
	for (int i=1; i<=8; i++)
	{
		
			cout<<"+--"<<"-"<<"--";
			
	}
	cout<<"+"<<endl;

	cout<<k<<endl;

		}
			cout<<"       ";
			for (int l=1; l<=8; l++)
	{
		
			cout<<"+--"<<"-"<<"--";
			
	}
	cout<<"+"<<endl;
	const int width= 78;
	const int height=25;
	int x= width/2;
	int y= height/2;
	char cursor= ' ';
	bool quit = false;
	while (!quit){
		setCursorPosition (x, y);
		cout<<cursor;
		
		if (_kbhit)
		{
			switch (_getch())
			{
				case 72:
				if (y>=3)
				{
						y-=2;
				}
					break;
					case 80:
					if(y<=15)
					{
						y+=2;
					}
						break;
						case 75:
						if (x>=12)
						{
							x-=6;
						}
							break;
							case 77:
							if(x<=46)
							{
									x+=6;
							}
								break;
								case 27:
								quit=true;
								break;
			}
		}
		

system("cls");
		cout<<"       "<<"   A     "<<"B     "<<"C     "<<"D     "<<"E     "<<"F     "<<"G     "<<"H     "<<endl;
		for (int k=1; k<=8; k++)
		{
	cout<<"       ";
	for (int i=1; i<=8; i++)
	{
		
			cout<<"+--"<<"-"<<"--";
			
	}
	cout<<"+"<<endl;

	cout<<k<<endl;

		}
			cout<<"       ";
			for (int l=1; l<=8; l++)
	{
		
			cout<<"+--"<<"-"<<"--";
			
	}
	cout<<"+"<<endl;
		}
		cout<<x<<", "<<y<<endl;
		
}
