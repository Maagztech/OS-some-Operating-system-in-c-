#include <iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>

using namespace std;
void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main()
{





  
time_t actual = time(NULL);
time_t duration = 2;
time_t endwait = actual + duration ;
cout << "_*_*_*_*_*_*_*_*_*__*_*_*_*_*WELCOME TO OS-SOME_*_*_*_*_*__*_*_*_*_*_*_\n" << "1 to enter 0 to exit ";
cout<<"PROJECT BY:\n";
cout<<"1.Shivam Sharma(captan)\n";
cout<<"2.Asher Ali\n";
cout<<"";








cout<<"DSG (mentor)\n";
while(actual < endwait)
{
actual = time(NULL);

}
//now this the main page whwre people will find list of programms
int i;

system("cls");

	
	gotoxy(5, 5);
cout("now this the main page where people will find list of programms");



scanf("%d",&i);
return 0;
}