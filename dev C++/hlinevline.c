#include<stdio.h>
#include<windows.h>
void gotoxy(short int col,short int row);
#define HLINE for(i=0;i<79;i++)\
				printf("%c",196);
#define VLINE(X,Y) {\
				gotoxy(X,Y);\
				printf("%c",179);\
			}
int main()
{
	int i,y;
	system("cls");
	gotoxy(1,12);
	HLINE
	for(y=1;y<25;y++)
	VLINE(39,y);
	
	printf("\n%c",196);
	printf("\n%c",179);
	return 0;
}
void gotoxy(short int col,short int row)
{
	HANDLE hStdout=GetStdHandle(STD_OUTPUT_HANDLE);
	COORD position={col,row};
	SetConsoleCursorPosition(hStdout,position);
}
