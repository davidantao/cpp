/*
Objective: Create a program in which one inputs their course areas and averages.
The program then tells them their average, future outlook, and career paths based on area of study interests.

*/
#include <iostream>
#include <string>
using namespace std;

class functionsClass{
public:

  void Setint(int a)
    a = a;
  int Getint(){
    return a;
  }

  cin >> a;
    if (100<a){cout<<"Try again from the top, smart ass."; return 0;}
    if (0>a){cout<<"Try again from the top, smart ass."; return 0;}
  cout <<"Now, type in the average of the second course. \n";

  cin >> b;
    if (100<b){cout<<"Try again from the top, smart ass."; return 0;}
    if (0>b){cout<<"Try again from the top, smart ass."; return 0;}
  cout <<"Now, type in the average of the third course. \n";

  cin >> c;
    if (100<c){cout<<"Try again from the top, smart ass."; return 0;}
    if (0>c){cout<<"Try again from the top, smart ass."; return 0;}
  cout <<"Now, type in the average of the fourth course. \n";

  cin >> d;
    if (100<d){cout<<"Try again from the top, smart ass."; return 0;}
    if (0>d){cout<<"Try again from the top, smart ass."; return 0;}
  cout <<"Now, type in the average of the fifth course. \n";

  cin >> e;
    if (100<e){cout<<"Try again from the top, smart ass."; return 0;}
    if (0>e){cout<<"Try again from the top, smart ass."; return 0;}
  cout <<"Now, type in the average of the sixth course. \n";

  cin >> f;
    if (100<f){cout<<"Try again from the top, smart ass."; return 0;}
    if (0>f){cout<<"Try again from the top, smart ass."; return 0;}

  avg = (a+b+c+d+e+f)/6;

  cout <<"Your total average, rounded to the nearest whole number is: " << avg <<" percent. \n";
    if (avg>=97){cout<<"Looks like someone's trying to get into Waterloo!"; return 0;}
    if (94<=avg){cout<<"You're doing pretty ok, but not you're definitely not in elite territory. Work a little harder."; return 0;}
    if (90<=avg){cout<<"Getting a scholarship from Humber, are we?"; return 0;}
    if (80<=avg){cout<<"Good luck at Ryerson."; return 0;}
    if (70<=avg){cout<<"You really have to step up your game."; return 0;}
    if (50<avg){cout<<"What are you even doing with your life?"; return 0;}
    if (50>avg){cout<<"Trios college awaits."; return 0;}

  private:
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int avg;

};

int main {
cout <<"Welcome to your overall average calculator. \nWe will calculate the average of your top-six courses. \nTo start off, type in the average of your first course, along with the department.\nSee the example below: \n Math, 98\n";
functionsClass fc;
fc.








return 0;
}
