//this is a comment
/* this is a multi line comment
as you can see. it has a slash and a star.*/
/* #include is commonly used to permit things,
 i.e. #include <iostream> tells the compiler iostream library
 which contains the function cout.
 Cout is read as see-out, and is another way of saying C output.*/

 #include <iostream> /*this is a pre-processor directive - it means
  we are including a file in the program that we are using later.*/

 using namespace std; /*these two, include and using namespace,
  simply mean that we are including things.
  Everything below is called a function, inclded in intmain.*/

 int main() /* it is very important to name the first function main.
 This indicates that the function below is the first one the program will run.
 int by the way means integers, as in we are dealing with integers.*/
 {
   /* code - all stuff in between the curly brackets are known as statements.
   all statements are basically instructions.
    ALL INSTRUCTIONS NEED TO END WITH A SEMI-COLON */

cout <<"hello there"<< endl;     /*cout means OUTPPUT STREAM OBJECT and is used
 to put characters on the screen. That's how we are able to type hello
 there on the computer screen. endl means END LINE. */

   return 0; // means command goes through fine
 }
