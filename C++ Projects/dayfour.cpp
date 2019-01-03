/*
Today's lesson(s) are: Classes and Objects

Classes and Objects
Classes are used to classify/group similar functions, integers, or whatever together.
They are useful because when you are dealing with large programs, you can differentiate and
find functions more easily as opposed to trying to find a single function out of hundreds.
Classes go hand in hand with objects, which are used to extract functions and other crap.
-----------------------------------------------------------------------------------------------
To make a class simply type class and then name it, followed by curly brackets.
If you intend on using anything from the class in your intmain, make it public
by simply typing "public:". Once you make all your functions and other crap,
remember to put a semi-colon at the end of the second curly bracket.

E.g.

class Waud{
  public:
  void sayings(){
  cout <<"this is a random example of a function."<<endl;
}

};

To extract a function from the class, you first need to call on the class by simply
typing in its name, and then naming an object for it.

Waud(name of class) sayingsObject(object name);

You then type in the object name, followed by a period and then immediately the function name.

Waud(name of class) sayingsObject(object name);
sayingsObject.sayings();

-----------------------------------------------------------------------------------
*/
#include <iostream>
using namespace std;

class Waud{
  public:
    void waudslogan(){
      cout <<"Respecting the law, Respecting the law! \nCopyright law, Copyright law!" <<endl;
    }

};


int main(){

  Waud sayingsObject;
  sayingsObject.waudslogan();

  return 0;
}
