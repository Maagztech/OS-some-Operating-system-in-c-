#include <iostream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>

using namespace std;

// here declare all the important function so that can be reusble.

void gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

// the main function starts from here
int main()
{

  // starting step of welcome and showing of menu page

  time_t actual = time(NULL);
  time_t duration = 5;
  time_t endwait = actual + duration;
  gotoxy(10, 10);
  cout << "_*_*_*_*_*_*_*_*_*__*_*_*_*_*WELCOME TO OS-SOME_*_*_*_*_*__*_*_*_*_*_*_\n";
  cout << "\n\nPROJECT BY:\n";
  cout << "---------------------\n";
  cout << "1.Shivam Sharma(captan)\n";
  cout << "2.Asher Ali\n";
  cout << "3.Asutosh Pradhan\n";
  cout << "";
  cout << "";
  cout << "DSG (mentor)\n";
  cout << "\n\n\n\n\nLoading have patient and read the credits.";

  int start;
  system("cls");
  cout << "::CHOOSE::\n";
  cout << "-------------\n";
  cout << "1.login\n";
  cout << "2.sign-up\n";
  cout << "3.shutdown\n";
  cin >> start;
  char id[25], pass[10], idcheck[25];
  switch (start)
  {
  case 1:
  {
    gotoxy(40, 30);
    cout << "ENTER USER ID:\n";
    cin >> id;
    cout << "PASSWORD:\n";
    cin >> pass;
    char plus[2] = "+";
    strcat(id, plus);
    strcat(id, pass);
    FILE *login = fopen("start.txt", "r");
    while (!EOF)
    {
      fgets(idcheck, 25, login);
      if (idcheck == id)
      {
        while (actual < endwait)
        {
          actual = time(NULL);
        }

        //now this the main page where people will find list of programms
        system("cls");

        cout << ".................successfuly entered\n"
             << "Showing Menu:\n"
             << "select your choice\n"
             << "1.Open Applications of other groups\n"
             << "2.WORD (*recommended to try)\n"
             << "3.NOTEPAD\n"
             << "4.GAMES\n"
             << "5.VIDEO PLAYER\n"
             << "6.YOUTUBE\n";
      }
    }
  }
  }

  // int choice1;
  // cout << "enter your choice :-";
  // cin >> choice1;
  // if (choice1 == 1)
  // {
  //   //just eneterd the appliaction part

  //   cout << "1. Batch's Projects"
  //        << "\t"
  //        << "2. Windows Media Player"
  //        << "\t"
  //        << "3.Notepad\n";

  //   int cia;
  //   cin >> cia; //choice in apps
  // }

  // // only tried to open
  // HANDLE hprocess = NULL;
  // char status = 'y';
  // HANDLE hthread = NULL;
  // STARTUPINFO si;
  // PROCESS_INFORMATION pi;
  // DWORD dwprocessId = 0;
  // DWORD dwthreadId = 0;
  // ZeroMemory(&si, sizeof(si));
  // ZeroMemory(&pi, sizeof(pi));
  // BOOL bCreateProcess = NULL;

  // bCreateProcess = CreateProcess(L"C:\\Windows\\notepad.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
  // if (bCreateProcess == FALSE)
  // {
  //   cout << "couldnotrocess\n"
  //        << GetLastError() << endl;
  // }
  // cout << "program launched succesfully\n"
  //      << endl;
  // cout << "processid" << pi.dwProcessId << endl;
  // cout << "threadid" << pi.dwThreadId << endl;

  // WaitForSingleObject(pi.hProcess, INFINITE);
  // CloseHandle(pi.hThread);
  // CloseHandle(pi.hProcess);
  int y;
  cin >> y;
  return (0);
}