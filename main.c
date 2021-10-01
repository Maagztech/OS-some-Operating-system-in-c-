#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void main()

{
   

time_t actual = time(NULL);
time_t duration = 2;
time_t endwait = actual + duration ;
printf("WELCOME TO OS ~ SOME\n\n");
printf("PROJECT BY:\n");
printf("1.Shivam Sharma(captan)\n");
printf("2.Asher Ali\n");
printf("");
printf("");
printf("");
printf("DSG (mentor)\n");
while(actual < endwait)
{
actual = time(NULL);

}
//now this the main page whwre people will find list of programms
int i;

system("cls");

	
	gotoxy(5, 5);
printf("now this the main page whwre people will find list of programms");



scanf("%d",&i);
}