/*
Todays's Lesson(s) are: Variables in Classes

Variables in Classes
Start typing out #include <string> below iostream and get used to it.

If you are putting a variable in a class, it is very important to list it under
PRIVATE and not public as a technical practice. To use the private variale,
you must then create two seperate PUBLIC functions: one to change the name, or
 SET
 and one to
 GET
 the name.
  After you do this as done below, to access it and run in intmain,
 First put class name and object name as usual, followed by semicolons.
 
 On the Next Line, put the object name, followed by a dot-sperator (period)
 and write the SET function name with the variable inside the parameter.
 
 To run, insert "cout <<" followed by the object and GET function with nothing
 in the parameters. Return 0 and there you have it.
 See Below for the example code.

 -------------------------------------------------------------------------------

 #include <iostream>
 #include <string>
 using namespace std;

 class Davidsclass{
     public:
         void setColour(string x) {
         colour = x;
         }
         string getColour() {
         return colour;
         }
     private:
         string colour;
 };

 int main(){

 Davidsclass objectname;
 objectname.setColour("(Put Colour Name Here)");
 cout << objectname.getColour();
 return 0;
 }
--------------------------------------------------------------------------------
*/

#include <iostream>
#include <string>
using namespace std;

class currencyClass {
    public:
    void setRate(float x){
        rate = x;
    }
    float getRate() {
        return rate;
    }
    private:
    float rate;

};

int main(){
    
    int amount;

    cout <<"Type in the amount in $CAD: ";
    cin >> amount;



    if (amount<100) {cout << "\nMaking a cross-border purchase? Perhaps evaluating a gift?";}
    if (amount<1000) {cout << "\nThat's quite a bit of money...";}
    if (amount>1000) {cout << "\nWhat do you even do with that sort of money? Should the authorities be informed?";}




    cout <<"\nThe equivalent balance, in USD, is: $";
    
    currencyClass co;
    co.setRate(0.76);

    cout << (co.getRate()*amount) << endl;

    return 0;
}