#include <iostream>
#include <fstream>
#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>
#include <string.h>
#include <math.h>

using namespace std;

bool gameover;

int recall()
{
  system("cls");
  int status;
  cout << "\n_*_*_*_*_*_*_*_*_*__*_*_*_*_*WELCOME TO OS-SOME_*_*_*_*_*__*_*_*_*_*_*_\n"
       << "1 to open notepad \n2 to open window media player\n3 to watch Date and Time\n4 to open calculator\n0 to exit ";
  cin >> status;
  time_t t;
  while (status == 1)
  {
    system("Start C:\\Windows\\notepad.exe");

    break;
  }
  while (status == 2)
  {
    system("Start C:\\Program Files\\Windows Media Player\\wmplayer.exe");

    break;
  }

  while (status == 3)
  {
    time(&t);
    char *current_time = ctime(&t);
    current_time[strlen(current_time) - 1] = '\0';
    cout << "\rcurrent time = " << current_time;
    break;
  }

  while (status == 4)
  {
  x:
    cout << "                    WELLCOME  TO SCENTIFIC CALCULATOR            " << endl;
    cout << "                  ***************************************         " << endl;
    cout << endl;
    cout << " Press 1 For Addition                    Press 2 For Subtraction              " << endl;
    cout << " Press 3 For Multiplication              Press 4 For Division                 " << endl;
    cout << " Press 5 For Logrithm                    Press 6 For Cosine  	             " << endl;
    cout << " Press 7 For Sine                        Press 8 For Tangent                  " << endl;
    cout << " Press 9 For Power                       Press 10 For Square Root             " << endl;
    cout << " Press 11 For Addition Of Matrix         Press 12 For Subtraction Of Matrix   " << endl;
    cout << " Press 13 For Area Of Triangle           Press 14 For Area and Cir of circle  " << endl;
    cout << " Press 15 For vf=vi+at                   Press 16 To Find Distance Covered    " << endl;
    cout << " Press 17 For S=v*t                      Press 18 TO Find Force               " << endl;
    cout << " Press 19 TO Find Density                Press 20 TO Find Temp In Fahrenheit  " << endl;
    cout << " Press 21 TO Temp in Celsius" << endl;
    cout << " Press 22 Exit								     " << endl;
    int choice;
    cout << "                        Now Enter Your Own Choice :";
    cin >> choice;
    switch (choice)
    {
    case 1:
      cout << endl;
      cout << "               CALCULATING ADDITION FOR TWO NUMBERS               " << endl;
      cout << "              **************************************              " << endl;
      int a, b, c;
      cout << "Enter 1st Number  :";
      cin >> a;
      cout << "Enter 2nd Number  :";
      cin >> b;
      c = a + b;
      cout << "The sum is        :" << c;
      cout << endl;
      cout << "              ---------------------------------------             " << endl;
      goto x;
      break;
    case 2:
      cout << endl;
      cout << "              CALCULATING DIFFERENCE OF TWO NUMBER                " << endl;
      cout << "             **************************************               " << endl;
      int d, e, f;
      cout << "Enter 1st Number  :";
      cin >> d;
      cout << "Enter 2nd number  :";
      cin >> e;
      f = d - e;
      cout << "Difference is     :" << f;
      cout << endl;
      cout << "             ---------------------------------------              " << endl;
      goto x;
      break;
    case 3:
      cout << endl;
      cout << "             CALCILATING MULTILPLICATION  FOR TWO NUMMBER           " << endl;
      cout << "            **********************************************          " << endl;
      int A, B, C;
      cout << "Enter 1st Number  :";
      cin >> A;
      cout << "Enter 2nd Number  :";
      cin >> B;
      C = A * B;
      cout << "The Multiplication is :" << C;
      cout << endl;
      cout << "           -----------------------------------------------         " << endl;
      goto x;
      break;
    case 4:
      cout << endl;
      cout << "              CALCULATING DIVISION FOR TWO NUMBER                 " << endl;
      cout << "             *************************************                " << endl;
      float D, E, F;
      cout << "Enter 1st Number :";
      cin >> D;
      cout << "Enter 2nd Number :";
      cin >> E;
      F = D / E;
      cout << "The Division is :" << F << endl;
      cout << endl;
      cout << "             --------------------------------------               " << endl;
      goto x;
      break;
    case 5:
      cout << "                      CALCULATING LOGRITHM                        " << endl;
      cout << "                      *********************                       " << endl;
      float number, In;
      cout << "Enter a number		     :";
      cin >> number;
      In = log(number);
      cout << " Logrithm of " << number << " is  :" << In << endl;
      cout << endl;
      cout << "                     ------------------------                     " << endl;
      goto x;
      break;
    case 6:
      cout << "                       CALCULATING COSINE                        " << endl;
      cout << "                       ******************                        " << endl;
      float n, n_cos;
      cout << "Enter a number          :";
      cin >> n;
      n_cos = cos(n);
      cout << " cosine of " << n << " is   :" << n_cos << endl;
      cout << endl;
      cout << "                     -----------------------                     " << endl;
      goto x;
      break;
    case 7:
      cout << "                        CALCULATING SINE                         " << endl;
      cout << "                       ****************** " << endl;
      float num, num_sin;
      cout << "Enter a number          :";
      cin >> num;
      num_sin = sin(num);
      cout << " sine of " << num << " is   :" << num_sin << endl;
      cout << endl;
      cout << "                     ----------------------                      " << endl;
      goto x;
      break;
    case 8:
      cout << "                     CALCULATING TANGENT                         " << endl;
      cout << "                    ***************x******                        " << endl;
      float x, x_tan;
      cout << "Enter  a number      :";
      cin >> x;
      x_tan = tan(x);
      cout << " Tan of " << x << " is   :" << x_tan << endl;
      cout << "                   ------------------------                      " << endl;
      goto x;
      break;
    case 9:
      cout << "                         CALCULATING POWER                       " << endl;
      cout << "                        *******************                      " << endl;
      double X, Y, power;
      cout << " Enter a number                :";
      cin >> X;
      cout << "Enter power of " << X << "         : ";
      cin >> Y;
      power = pow(X, Y);
      cout << " Result of " << X << "^" << Y << "  is :" << power << endl;
      cout << "                   -----------------------------                 " << endl;
      goto x;
      break;
    case 10:
      cout << "                      CALCULATING SQUARE ROOT                    " << endl;
      cout << "                     *************************                   " << endl;
      float z, sqroot;
      cout << "Enter a number                   :";
      cin >> z;
      sqroot = sqrt(z);
      cout << " The square root of " << z << " is   :" << sqroot << endl;
      cout << "                   -------------------------------               " << endl;
      goto x;
      break;
    case 11:
      cout << "                        ADDITION OF MATRIX                      " << endl;
      cout << "                       **********************                    " << endl;
      int p, q, r, s, P, Q, R, S, sum_1, sum_2, sum_3, sum_4;
      cout << "Enter the first number of first matrix   :";
      cin >> p;
      cout << "Enter the second number of first matrix  :";
      cin >> q;
      cout << "Enter the third number of first matrix   :";
      cin >> r;
      cout << "Enter the fourth number of first matrix  :";
      cin >> s;
      cout << "Enter the first number of second matrix  :";
      cin >> P;
      cout << "Enter the second number of second matrix :";
      cin >> Q;
      cout << "Enter the third number of second matrix  :";
      cin >> R;
      cout << "Enter the fourth number of second matrix :";
      cin >> S;
      sum_1 = p + P;
      sum_2 = q + Q;
      sum_3 = r + R;
      sum_4 = s + S;
      cout << endl;
      cout << "                           Sum of Martix                        " << endl;
      cout << sum_1 << "\t" << sum_2 << endl;
      cout << sum_3 << "\t" << sum_4 << endl;
      cout << endl;
      cout << "                   ----------------------------------            " << endl;
      goto x;
      break;
    case 12:
      cout << "                        SUBTRACTION OF MATRIX                    " << endl;
      cout << "                       ***********************                   " << endl;
      int h, i1, j, k, H, I, J, K, sub_1, sub_2, sub_3, sub_4;
      cout << "Enter the first number of first matrix  :";
      cin >> h;
      cout << "Enter the second number of first matrix :";
      cin >> i1;
      cout << "Enter the third number of first matrix  :";
      cin >> j;
      cout << "Enter the fourth number of first matrix :";
      cin >> k;
      cout << "Enter the first number of second matrix :";
      cin >> H;
      cout << "Enter the second number of second matrix:";
      cin >> I;
      cout << "Enter the third number of second matrix :";
      cin >> J;
      cout << "Enter the fourth number of second matrix:";
      cin >> K;
      sub_1 = h - H;
      sub_2 = i1 - I;
      sub_3 = j - J;
      sub_4 = k - K;
      cout << endl;
      cout << "                           The Difference  is                    " << endl;
      cout << sub_1 << "\t" << sub_2 << endl;
      cout << sub_3 << "\t" << sub_4 << endl;
      cout << "                    ----------------------------------           " << endl;
      goto x;
      break;
    case 13:
      cout << "                           AREA OF TRIANGLE                      " << endl;
      cout << "                         ********************                    " << endl;
      float area, base, height;
      cout << "Enter base           :";
      cin >> base;
      cout << "Enter height         :";
      cin >> height;
      area = base * height * .5;
      cout << " Area of triangle is : " << area << endl;
      cout << "                      --------------------------                 " << endl;
      goto x;
      break;
    case 14:
      cout << "                  AREA AND CIRCUMFERENCE  OF CIRCLE              " << endl;
      cout << "                 ***********************************             " << endl;
      float ar, cir, radius;
      cout << "Enter the radius      :";
      cin >> radius;
      ar = radius * radius * 3.14;
      cout << "The are is            :" << ar << endl;
      cir = radius * 2 * 3.14;
      cout << "The circumference is  :" << cir << endl;
      cout << "             ------------------------------------------          " << endl;
      goto x;
      break;
    case 15:
      cout << "                    PROGRAM FOR vf=vi+at                         " << endl;
      cout << "                  ************************                       " << endl;
      float vi, ac, t, vf;
      cout << "Enter initial velocity  vi :";
      cin >> vi;
      cout << "Enter acceleration     a  :";
      cin >> ac;
      cout << "Enter time             t  :";
      cin >> t;
      vf = (vi + ac) * t;
      cout << "Final velocity vf  is     :" << vf << endl;
      cout << endl;
      cout << "                ---------------------------------                " << endl;
      goto x;
      break;
    case 16:
      cout << "              CALCULATING DISTANCE COVERED BY A BODY             " << endl;
      cout << "             ****************************************            " << endl;
      float velocity, time, acceleration, Distance;
      cout << "Enter initial velocity    :";
      cin >> velocity;
      cout << "Enter time                :";
      cin >> time;
      cout << "Enter acceleration        :";
      cin >> acceleration;
      cout << endl;
      Distance = velocity * time + acceleration * time * time * 1 / 2;
      cout << "Distance covered  is      :" << Distance << endl;
      cout << endl;
      cout << "            ------------------------------------------          " << endl;
      goto x;
      break;
    case 17:
      cout << "                        CALCULATING  S=v*t                       " << endl;
      cout << "                      **********************                     " << endl;
      float v1, t1, S1;
      cout << "Enter the velocity       :";
      cin >> v1;
      cout << "Enter the time           :";
      cin >> t1;
      S1 = v1 * t1;
      cout << "Distance  is             :" << S1 << endl;
      cout << endl;
      cout << "                 ----------------------------------              " << endl;
      goto x;
      break;
    case 18:
      cout << "                         CALCULATING   FORCE                     " << endl;
      cout << "                       ***********************                   " << endl;
      float m, a1, f1;
      cout << "Enter mass            :";
      cin >> m;
      cout << "Enter acceleration    :";
      cin >> a1;
      f1 = m * a1;
      cout << "Force is              :" << f1 << endl;
      cout << endl;
      cout << "                   -----------------------------                 " << endl;
      goto x;
      break;
    case 19:
      cout << "                   CALCULATING  DENSITY                          " << endl;
      cout << "                  **********************                         " << endl;
      float M, V, D1;
      cout << "Enter Mass       :";
      cin >> M;
      cout << "Enter Volume     :";
      cin >> V;
      D1 = M / V;
      cout << "Density is       :" << D1 << endl;
      cout << endl;
      cout << "               ----------------------------                       " << endl;
      goto x;
      break;
    case 20:
      cout << "             CALCULATING  TEMPERATURE IN FAHRENHEIT               " << endl;
      cout << "            ****************************************              " << endl;
      float Ce, Fe;
      cout << "Enter temperature in celsius      :";
      cin >> Ce;
      Fe = Ce * 9 / 5 + 32;
      cout << "Temperature in Fahrenheit is      :" << Fe << endl;
      cout << endl;
      cout << "         ---------------------------------------------            " << endl;
      goto x;
      break;
    case 21:
      cout << "             CALCULATING  TEMPERATURE IN CELSIUS                  " << endl;
      cout << "            *************************************                 " << endl;
      float Feh, Cel;
      cout << "Enter temperature in Fahrenheit  : ";
      cin >> Feh;
      Cel = (Feh - 32) * 5 / 9;
      cout << "Temperature in Celsius is        :" << Cel << endl;
      cout << endl;
      cout << "            --------------------------------------                " << endl;
      goto x;
      break;
    case 22:
      exit(0);
      break;
    default:
      cout << "                     Invalid   choice                            " << endl;
      cout << "                ----------------------------------               " << endl;
      goto x;
    }

    system("pause");
  }



  if (status == 0)
  {
    return 0;
  }
  else
  {
    return recall();
  }
}

// here declare all the important function so that can be reusble.

int gotoxy(int x, int y)
{
  COORD coord;
  coord.X = x;
  coord.Y = y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}
int switcf(int switchcheck)
{
  char id[25], pass[10], idcheck[25];
  switch (switchcheck)
  {
  case 1:
  {
    cout << "ENTER USER ID:\n";
    cin >> id;
    cout << "PASSWORD:\n";
    cin >> pass;
    char plus[2] = "+";
    strcat(id, plus);
    strcat(id, pass);
    FILE *login = fopen("start.txt", "r");
    int accno = 0;
    while (!EOF)
    {
      fgets(idcheck, 25, login);
      ++accno;
      cout << idcheck << "\n";
      if (idcheck == id)
      {
        fclose(login);
        return accno;
      }
    }
    break;
  }

  case 2:
  {
    cout << "\tSIGN-UP FOR OS~SOME\n"
         << "-----------------------------------------\n\n\n\n";
    cout << "ENTER YOUR NAME:\n";
    char name[100];
    cin >> name;
    cout << "CHOOSE USER ID(max 10 letters + numbers allowed):\n";
    cin >> id;
    cout << "PASSWORD: (max 10 letters + numbers allowed)\n";
    cin >> pass;
    char plus[2] = "+";
    strcat(id, plus);
    strcat(id, pass);
    fstream signup;
    signup.open("start.txt", ios::out | ios::app);
    signup << id << "\n";
    signup.close();
    fstream name1;
    name1.open("name.txt", ios::out | ios::app);
    name1 << name << "\n";
    name1.close();
    system("cls");
    cout << "Hii " << name << " thanks !! you are successfully registered .Now do your work.";
    break;
  }

  case 3:
  {
    cout << "Shutting down";
    Sleep(3000);
    exit(0);
  } //switch end for shutdown

  } //end of switch
} //end of switchf function

void loginf(int accno)
{
  {

    system("cls");
    FILE *namefind = fopen("name.txt", "r");
    int count = 0;
    char name[100] = "Daya Sagar Gupta";       /* or other suitable maximum line size */
    while (fgets(name, 100, namefind) != NULL) /* read a line */
    {

      if (count == accno)
      {

        fclose(namefind);
        break;
      }
      else
      {
        count++;
      }
    }
    if (fgets(name, 100, namefind) != NULL)
    {
      cout << "NO SUCH RECORD FOUND , RESTART AGAIN TO START.\n";
      time_t actual1 = time(NULL);
      time_t duration1 = 5;
      time_t endwait1 = actual1 + duration1;
      while (actual1 < endwait1)
      {
        actual1 = time(NULL);
      }
      system("cls");
      exit(0);
    }

    cout << "HELLO!! " << name << " WELCOME AGAIN.";
    time_t actual = time(NULL);
    time_t duration = 5;
    time_t endwait = actual + duration;
    while (actual < endwait)
    {
      actual = time(NULL);
    }

    //now this the main page where people will find list of programms
    system("cls");

    recall();
  }
}


// the main function starts from here
int main()
{

  // starting step of welcome and showing of menu page

  gotoxy(10, 10);
  cout << "_*_*_*_*_*_*_*_*_*__*_*_*_*_*WELCOME TO OS-SOME_*_*_*_*_*__*_*_*_*_*_*_\n";
  cout << "\n\nPROJECT BY:\n";
  cout << "---------------------\n";
  cout << "1.Shivam Sharma(captain)\n";
  cout << "2.Asher Ali\n";
  cout << "3.Asutosh Pradhan\n";
  cout << "4.Shresth\n";
  cout << "5.Rohit \n";
  cout << "\n\nDr. Daya Sagar Gupta(mentor)\n";
  cout << "\n\n\n\n\nLoading have patient and read the credits.";

  time_t actual = time(NULL);
  time_t duration = 5;
  time_t endwait = actual + duration;
  while (actual < endwait)
  {
    actual = time(NULL);
  }

  int start;
  system("cls");
  cout << "::CHOOSE::\n";
  cout << "-------------\n";
  cout << "1.login\n";
  cout << "2.sign-up\n";
  cout << "3.shutdown\n";
  cin >> start;
  int accno = switcf(start);
  loginf(accno);

  int y;
  cin >> y;
  return (0);
}