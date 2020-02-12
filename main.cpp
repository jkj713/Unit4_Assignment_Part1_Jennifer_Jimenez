/*
Jennifer Jimenez
Dr_T
Unit 4 Assignment Part 1
This program will multiply a number by itself and divide a number by itself
*/

#include <iostream>
using namespace std;

int main() 
{
//Variable Declarations and Initialization
double input = 0.0;
double equation1 = 0.0;
double equation2 = 0.0;
double multiplication = 0.0;
double division = 0.0;
int counter = 0;


if(input == '\0')
{
  cout << "Please enter a number (-1 to exit): ";
  cin >> input;

}
//Process
multiplication = (input*input);
division = (input/input);
equation1 = ((input+3)/5);
equation2 = ((input+3)/5) + ((input+7)/2);
//Output
cout << "Your number multiplied by itself is " << multiplication << endl;
cout << "Your number divided by itself is " << division << endl;
cout << "((" << input << "+3)/5) = " << equation1 << endl;
cout << "((" << input << "+3/5) + ((" << input << "+7)/2) = " << equation2 << endl;

if(input == -1)
cout << "Thanks for playing!";
while(input != -1.0) //Exit condition

//Output
counter++;
cout << "\nThis program ran " << counter;
cout << " times.";

  return 0;
}