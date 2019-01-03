
#include <iostream>
#include <string>
#include <cmath> //must include this to access trig functions.
using namespace std;

int main()
{
  //variables for authenitification code, Pi, the range, angle of launch in radians, and angle of launch in degrees.
  int code;
  double PI = 3.14159265359;
  double range;
  double dangle;
  double angle;

  //starts off with authentification procedure; message for incorrect authentification code.
  //the correct authentification code is simply "12345678".
  cout << "Hello. Please insert the eight digit authentification code.\n";
  cin >> code;
    if(code != 12345678){
        cout << "Unauthorized entry has been denied. Your location has been successfully tracked and you will be terminated in T-5 minutes.";
        return 0;
      }


  /*message and procedure: the horizontal range must be inputed first.

    The length range of this particular projectile launch system is 70 km.

  */


  cout << "Welcome back.\nInsert the distance of the target, in metres.\n";
  cin >> range;


  /*once the range is inputed, the angle in radians is calculated (dangle).

    The calculation proccess is simply the typical range equation with an vertical
    displacement of 0, manipulated to solve for the angle when given initial  velocity,
    acceleration due to gravity, and the horizontal distance inputed as range.

    The initial velocity in this case is given to be 828 m/s, which is comparable with
    that of the Israeli Iron-Dome missile defence system.

    The length range of this particular projectile launch system is around 11 km.

    The angle in degrees found after converting from radians, and given to the user.
  */

  dangle = (asin(range*9.8/686000))/2;
  angle = dangle*(180/PI);
  cout << "The angle of the launcher must be set to precisely " << angle << " degrees.\n\n";
  cout <<"You may fire when ready.";

  return 0;
}
