#include <iostream>
#include <string>
#include <cmath> //must include this to access trig functions.
using namespace std;

int main()
{
  //variables for authenitification code, Pi, the range, angle of launch in radians, and angle of launch in degrees.
  int equation;
  int miisingvar;
  double v1;
  double v2;
  double a;
  double t;
  double d;

  cout <<"Welcome to your Big 5 Calculator. To start, indication which variable is missing from your situation given the following options.\n";
  cout <<"1. a\n2. t\n3. d\n4. v1\n5. v2\n Type in the number associated with the missing variable.";
  cin >> equation;
//---EQUATION 1-----------------------------------------------------------------------------------------------------------------------------------
  if (equation == 1){
    /*
    d = 0.5*(v1 + v2)*t    (3)
    t = (v1+v2)/2*d        (2)
    v1 = (d/0.5*t)-v2      (4)
    v2 = (d/0.5*t)-v1      (5)
    */
    cout << "Which variable do you need to find? Insert the numerical value listed above.";
    cin >> miisingvar;

//----SUBEQUATIONS 1-----------------------------------------------------------------------------------------------------------------------------------

    if (miisingvar == 3){
      cout << "Insert the value of v1, then v2, then t.\n";
      cin >> v1;
      cin >> v2;
      cin >> t;
      d = 0.5*(v1 + v2)*t;

      cout << "The answer is " << d << ".";
    }

      if (miisingvar == 2){
        cout << "Insert the value of v1, then v2, then d.\n";
        cin >> v1;
        cin >> v2;
        cin >> d;
        t = (v1 + v2)/2*d;

        cout << "The answer is "<< t <<".";
      }
        if (miisingvar == 4){
          cout << "Insert the value of d, then v2, then t.\n";
          cin >> d;
          cin >> v2;
          cin >> t;
          v1 = (d/0.5*t)-v2;

          cout << "The answer is " << v1 << ".";
        }
          if (miisingvar == 5){
            cout << "Insert the value of v1, then d, then t.\n";
            cin >> v1;
            cin >> d;
            cin >> t;
            v2 = (d/0.5*t)-v1;

            cout << "The answer is "<< v2<< ".";
          }
    }
 
 //---EQUATION 2-------------------------------------------------------------------------
 
  if (equation == 3){
    /*
    v2 = v1 + (a*t)    (5)
    v1 = v2 - (a*t)       (4)
    a = (v2-v1)/t      (1)
    t = (v2-v1)/a      (2)
    */
    cout << "Which variable do you need to find? Insert the numerical value listed above.";
    cin >> miisingvar;
//--SUBEQUATIONS 2--------------------------------------------------------------------------------
    if (miisingvar == 5){ 
      cout << "Insert the value of v1, then a, then t.\n";
      cin >> v1;
      cin >> a;
      cin >> t;
      v2 = v1 + (a*t);

      cout << "The answer is " << v2 << ".";
    }

      if (miisingvar == 4){
        cout << "Insert the value of v2, then a, then t.\n";
        cin >> v2;
        cin >> a;
        cin >> t;
        v1 = v2 - (a*t) ;

        cout << "The answer is "<< v1 <<".";
      }
        if (miisingvar == 1){
          cout << "Insert the value of v2, then v1, then t.\n";
          cin >> v2;
          cin >> v1;
          cin >> t;
          a = (v2-v1)/t ;

          cout << "The answer is " << a << ".";
        }
          if (miisingvar == 2){
            cout << "Insert the value of v2, then v1, then a.\n";
            cin >> v2;
            cin >> v1;
            cin >> a;
            t = (v2-v1)/a   ;

            cout << "The answer is "<< t << ".";
          }
    }
 
//--EQUATION 3-----------------------------------------------------------------------------------------
  if (equation == 5){
    /*
    d = v1*t + ((a*t*t)/2)    (3)
    
    */
    cout << "Which variable do you need to find? Insert the numerical value listed above.";
    cin >> miisingvar;
//--SUBEQUATIONS 3--------------------------------------------------------------------------------
    if (miisingvar == 3){ 
      cout << "Insert the value of v1, then a, then t.\n";
      cin >> v1;
      cin >> a;
      cin >> t;
      d = v1*t + ((a*t*t)/2);

      cout << "The answer is " << d << ".";
    }

    }
 
//--EQUATION 4--------------------------------------------------------------------------------------------
 if (equation == 4){
    /*
    d = v2*t - ((a*t*t)/2)    (3)
    
    */
    cout << "Which variable do you need to find? Insert the numerical value listed above.";
    cin >> miisingvar;
//--SUBEQUATIONS 4--------------------------------------------------------------------------------
    if (miisingvar == 3){ 
      cout << "Insert the value of v2, then a, then t.\n";
      cin >> v2;
      cin >> a;
      cin >> t;
      d = v2*t - ((a*t*t)/2);

      cout << "The answer is " << d << ".";
    }

    }

//--EQUATION 5--------------------------------------------------------------------------------------------------------------------------------


  if (equation == 2){
    /*
    v2 = sqrt((pow(v1,2)) + 2*a*d)    (5)
    v1 = sqrt((pow(v2,2)) - 2*a*d) )    (4)
    a = (pow(v2,2) - pow(v1,2))/2*d     (1)
    d = (pow(v2,2) - pow(v1,2))/2*a       (3)
    */
    cout << "Which variable do you need to find? Insert the numerical value listed above.";
    cin >> miisingvar;
//--SUBEQUATIONS 5--------------------------------------------------------------------------------
    if (miisingvar == 5){ 
      cout << "Insert the value of v1, then a, then d.\n";
      cin >> v1;
      cin >> a;
      cin >> d;
      v2 = sqrt((pow(v1,2)) + 2*a*d)  ;

      cout << "The answer is " << v2 << ".";
    }

      if (miisingvar == 4){
        cout << "Insert the value of v2, then a, then d.\n";
        cin >> v2;
        cin >> a;
        cin >> d;
        v1 = sqrt((pow(v2,2)) - 2*a*d)   ;

        cout << "The answer is "<< v1 <<".";
      }
        if (miisingvar == 1){
          cout << "Insert the value of v2, then v1, then d.\n";
          cin >> v2;
          cin >> v1;
          cin >> d;
          a = (pow(v2,2) - pow(v1,2))/2*d  ;

          cout << "The answer is " << a << ".";
        }
          if (miisingvar == 3){
            cout << "Insert the value of v2, then v1, then a.\n";
            cin >> v2;
            cin >> v1;
            cin >> a;
            d = (pow(v2,2) - pow(v1,2))/(2*a)    ;

            cout << "The answer is "<< d << ".";
          }
    }

    return 0;
}


