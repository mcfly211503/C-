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
	const int width= 80;
	const int height=25;
	int x= width/2;
	int y= height/2;
	char cursor= '_';
	bool quit = false;
	while (!quit){
		setCursorPosition (x, y);
		cout<<cursor;
		if (_kbhit)
		{
			switch (_getch())
			{
				case 72:
					y--;
					break;
					case 80:
						y++;
						break;
						case 75:
							x--;
							break;
							case 77:
								x++;
								break;
								case 27:
								quit=true;
								break;
			}
		}
system("cls");
		}
}
