/*
Today's lesson(s) are: Constructors

Constructors

Constructors are functions that are called upon/run automatically once an object is
declared in int main.

To create a constructor, the proccess is very simple. Constructors never have a return type,
so you never have to type int or void or anything like that. All you have to do is put
the name of the constructor, which is always the same as the class name.

As soon as you create an object name in int main, the constructor function will run.

Constructors are used mainly to give variables an  initial value.

For example, if you use the code below, you can use the constructor to set a value to the
variable immediiately. To do this, create a constructor with a parameter of the same
function type as the variable. Once you set the parameter with the function and variable,
call on the set function and insert the prior variable of the constructor as the parameter.

After this, to access in intmain, what you do is simple. Go to intmain, type in the class
name and object name, followed by parameters containing the desired variable on the same line.

-------------------------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>
using namespace std;

class classOne {
  public:
    classOne (string z){
      setName(z);
    }
    void setName(string x){
      name = x;
    }
    string getName(){
      return name;
    }

  private:
  string name;
};

int main(){
  classOne co ("My name is David");


  cout << co.getName();





  return 0;
}
