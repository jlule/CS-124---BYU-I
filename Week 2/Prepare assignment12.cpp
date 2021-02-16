
/***********************************************************************
* Program:
*    Assignment 12  Input Variables          (e.g. Assignment 10, Hello World)
*    Brother Manley, CS124
* Author:
*    James Lule
* Summary:
*    Enter a brief description of your program here!  Please note that if
*    you do not take the time to fill out this block, YOU WILL LOSE POINTS.
*    Before you begin working, estimate the time you think it will
*    take you to do the assignment and include it in this header block.
*    Before you submit the assignment include the actual time it took.
*
*    Estimated:  0.75 hrs
*    Actual:     0.5hrs
*      Please describe briefly what was the most difficult part.
*     " There was nothing difficult about the writing the program.
*      The only confusing thing was how to use the set width and
*      understanding the the library that contains it."
************************************************************************/

#include <iostream>
#include <iomanip>
using namespace std;

 /**********************************************************************
* Write a program that prompts the user for his or her income and 
* displays the result on the screen. There will be two parts:
***********************************************************************/


int main()
{
   float income;
   cout << "\tYour monthly income: ";
   cin >> income;
   cout << fixed;
   cout<< setprecision(2);
   cout << "Your income is: $"
        << setw(9) << right << income
        << endl;


   return 0;
}
