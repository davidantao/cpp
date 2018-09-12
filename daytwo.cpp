#include <iostream>

using namespace std;

/*get used to typing out those two above phrases.

Today is about text, more specifically how to write on
multiple lines. It is fairly simple. Instead of
repeatedly having to do endl, you can simply type in
"\n". this should allow you to put phrases on multiple
within the same cout.


In addition to text, I learned about variables. To insert a variable, all
I have to do is type "int" (integer), followed by whatever variable I want,
and make it equal something. i.e., int current price = 21;.

This is useful because in the cout, you can make a basic calculation as
presented bellow.


*/

int main(){

int currentstock = 21;
int originalprice = 11;
int numbershares = 500;
int profit= (currentstock - originalprice)*numbershares;

cout <<"Hello again.\nIt has been a while, hasn't it.\nAnyway, your profit seems to be very high!\nWould you be interested in selling? \nYour profit so far, in American dollors is: "<< endl;
cout << profit;
cout << "   Pretty nice, eh??"<< endl;

return 0;

}
