
/***********************************************************************
* Program:
*    Assignment 15,Boolean Expressions
*    Brother Manley, CS124
* Author:
*    James Lule
* Summary:
*    This program determines if an individual is a full tithe payer.
*
*    Estimated:  0.75 hrs
*    Actual:     1.0. hrs
*      Please describe briefly what was the most difficult part.
************************************************************************/

#include <iostream>
using namespace std;

/**********************************************************************
 *This program uses the function isFullTithepayer to determine if the individual
  is a full tithe payer
 
 ***********************************************************************/
bool isFullTithePayer(float income, float tithe)
{

   if (tithe >= income/10)
      return true;
   else
      return false;
}


/**********************************************************************
 * Main will call isFullTithePayer() and display an appropriate message
 * to the user based on the results
 ***********************************************************************/

int main()
{
   float income;
   float tithe;


   cout << "Income: ";
   cin  >> income;


   cout << "Tithe: ";
   cin  >> tithe;


   if (isFullTithePayer(income, tithe))
      cout << "You are a full tithe payer.\n";
   else
      cout << "Will a man rob God?  Yet ye have robbed me.\n"
           << "But ye say, Wherein have we robbed thee?\n"
           << "In tithes and offerings.  Malachi 3:8\n";

   return 0;
}

