/* Today's lessons are :Basic Calculator, Variable memory, Arithmetic, If, Function, Parameters

For a basic calculator, it is important to know that variables do not have
to be inputed immediately. for example, you can have int a; and int b;, and have
them change depending on the user's input. The user's input can be done in a
way similar to cout using "cin", read as "see-in". A major difference between the
two is that cout uses less than signs while cin uses greater tham signs.
cout <<;
 cin >>;

--------------------------------------------------------------------------------------

For variable memory, you only have to write "int" once for a variable, even if
it is going to be declared later. E.g.,
int a;
a = 15
In addition to this, if you put more than one value for  a single variable,
it will use the newest one.

---------------------------------------------------------------------------------------


For arithmetic calculations, use brackets where necessary. Important to note
that if you want a remainder of a number, use the percentage sign. This is when
you are dealing with integer. E.g.
int x = 21/2;
cout <<x; will give you 10
int x = <<21%2;
cout <<x will give you 1 (the remainder)

---------------------------------------------------------------------------------------

For if statements, the tag s simply the word itself, followed by brackets and then
curly brackets. inside the curly brackets is the body, similar to in intmain.
You put the condition of if, which is >,<,<=,>=,==(equal), or !=(inequal) inside
the regular brackets. you then put the cout in the curly brackets. E.g.

if(6>5){

  cout<< The statement is true.

}

---------------------------------------------------------------------------------------

To add multiple functions, create and declare them. For a function with a return,
or in other words to have a function simply RUN, use "void" instead of "int", followed by
the name, brackets (parameters), and then curly brackets. The curly brackets then contain the code.
After you create a function, copy and paste its name and parameters (void name()) and semicolon it above the
intmain. This allows c++ to acknowledge that there is a function call so-and-so, and will not
freak out when you address it in intmain.
E.g.

void avgcalc ();
int main() {
    avgcalc();
    return 0;

}

void avgcalc (){
  cout << "hello" << endl;
}
---------------------------------------------------------------------------------------
*/



#include <iostream>

using namespace std;

int main() {

int a;
int b;
int c;
int d;
int e;
int f;
int avg;

cout <<"Welcome to your overall average calculator. \nWe will calculate the average of your top-six courses. \n";

cout <<"To start off, type in the average of your first course. \n";

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
return 0;

}
