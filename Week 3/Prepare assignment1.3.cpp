File Edit Options Buffers Tools C++ Help
/***********************************************************************
* Program:
*    Assignment 13, Expressions
*    Brother Manley, CS124
* Author:
*    James Lule
* Summary:
*   This program asks the user for input  then it converts that value to\
 celsius
*
*    Estimated:  0.75 hrs
*    Actual:     0.5 hrs
*      Please describe briefly what was the most difficult part.
       Passing testbed
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Main collects input from user then converts that input to convert celsius
 *
 ***********************************************************************/
int main()
{
   int fahrenheit;
   cout << "Please enter Fahrenheit degrees: ";
   cin  >> fahrenheit;
   cout << fixed;
   cout << setprecision(0);
   float celsius = 5.0 / 9.0 * ((float) fahrenheit - 32);
   cout << "Celsius: "
        << celsius
        << endl;
   return 0;
}
