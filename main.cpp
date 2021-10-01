#include <iostream>
#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include <windows.h>

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
time_t duration = 2;
time_t endwait = actual + duration ;
gotoxy(10,10);
cout << "_*_*_*_*_*_*_*_*_*__*_*_*_*_*WELCOME TO OS-SOME_*_*_*_*_*__*_*_*_*_*_*_\n";
cout<<"PROJECT BY:\n";
cout<<"---------------------";
cout<<"1.Shivam Sharma(captan)\n";
cout<<"2.Asher Ali\n";
cout<<"";
cout<<"";
cout<<"";
cout<<"DSG (mentor)\n";
while(actual < endwait)
{
actual = time(NULL);
}



//now this the main page where people will find list of programms
system("cls");

		cout << ".................successfuly entered\n" << 
    "Showing Menu:\n" << "select your choice\n" << "1.Open Applications\n" 
    << "2.Snake Game\n" << "3.Personal Banking\n";

		int choice1; 
    cout<<"enter your choice";
    cin >> choice1;
		if (choice1 == 1) { //just eneterd the appliaction part
		
				HANDLE hprocess = NULL; char status = 'y';
			HANDLE hthread = NULL;
			STARTUPINFO si;
			PROCESS_INFORMATION pi;
			DWORD dwprocessId = 0;
			DWORD dwthreadId = 0;
			ZeroMemory(&si, sizeof(si));
			ZeroMemory(&pi, sizeof(pi));
			cout << "1. Batch's Projects" << "\t" << "2. Windows Media Player" << "\t" << "3.Notepad\n";
			int cia; cin >> cia; //choice in apps
			if (cia == 2) {
				BOOL bCreateProcess = NULL;

				bCreateProcess = CreateProcess(L"C:\\Program Files\\Windows Media Player\\wmplayer.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
				if (bCreateProcess == FALSE)
				{
					cout << "couldnotrocess\n" << GetLastError() << endl;
				}
				cout << "program launched succesfully\n" << endl;
				cout << "processid" << pi.dwProcessId << endl;
				cout << "threadid" << pi.dwThreadId << endl;
				cout << "getprocessid" << GetProcessId(pi.hProcess) << endl;
				WaitForSingleObject(pi.hProcess, INFINITE);
				CloseHandle(pi.hThread);
				CloseHandle(pi.hProcess);
			}//end of wmplayer 
			if (cia == 3) {
				BOOL cCreateprocess = NULL;
				cCreateprocess = CreateProcess(L"C:\\Windows\\notepad.exe", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
				WaitForSingleObject(pi.hProcess, INFINITE);
				CloseHandle(pi.hThread);
				CloseHandle(pi.hProcess);
			} //end of notepad
			if (cia == 1) { // while(status2!=0){
				cout << " we are working on this feature";
				/*
			while(status2!=0) {}cout<< thhis feature allows you to open batch's programs easily BOOL dcreateprocess = NULL;
				 dcreateprocess = CreateProcess(L"", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
				 WaitForSingleObject(pi.hProcess, INFINITE);
				 CloseHandle(pi.hThread);
				 CloseHandle(pi.hProcess);
				 cout<<"1 to continue opening programs and 0 to exit"; cin>>status2 }*/


			} // end of batch's prgm
			cout << "enter 1 to continue with apps and 0 to exit"; cin >> status1; //end of apps
		}  cout << "enter 1 to main menu and 0 to exit"; cin >> status; //end of menu
	}
}
				/* if (n == 3) {
					 BOOL ecreateprocess = NULL;
					 ecreateprocess = CreateProcess(L"", NULL, NULL, NULL, FALSE, 0, NULL, NULL, &si, &pi);
					 WaitForSingleObject(pi.hProcess, INFINITE);
					 CloseHandle(pi.hThread);
					 CloseHandle(pi.hProcess);
				 }*/


int i;
scanf("%d",&i);
return 0;
}