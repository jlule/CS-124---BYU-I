/***********************************************************************
* Program:
*    Assignment 11, Output
*    Brother Manley, CS124
* Author:
*    James Lule
* Summary:
*   This program displays a monthly budget. From how much a person makes
*   and how he spends that money in a month
*
*    Estimated:  0.75 hrs
*    Actual:     0.55 hrs
*      Please describe briefly what was the most difficult part.
*      The time it took to write the program was the only difficult part.
************************************************************************/
#include <iostream>
#include <iomanip>
using namespace std;

/**********************************************************************
 * Add text here to describe what the function "main" does. Also don't forget
 * to fill this out with meaningful text or YOU WILL LOSE POINTS.
 ***********************************************************************/

int main()
{

   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);

   cout << "\t" << setw(13) << left << "Item"
        << setw(2) << " "
        << setw(10) << left << "Projected\n";

   cout << "\t=============  ==========\n";

   cout << "\t" << setw(13) << left << "Income"
        << setw(3) << right << " $"
        << setw(9) << right << 1000.00 << endl;

   cout << "\t" << setw(13) << left << "Taxes"
        << setw(3) << right << " $"
        << setw(9) << right << 100.00
        << endl;

   cout << "\t" << setw(13) << left << "Tithing"
        << setw(3) << right << " $"
        << setw(9) << right << 100.00
        << endl;


   cout << "\t" << setw(13) << left << "Living"
        << setw(3) << right << " $"
        << setw(9) << right << 650.00
        << endl;

   cout << "\t" << setw(13) << left << "Other"
        << setw(3) << right << " $"
        << setw(9) << right << 90.00
        << endl;

   cout << "\t=============  ==========\n";

   cout << "\t" << setw(13) << left << "Delta"
        << setw(3) << right << " $"
        << setw(9) << right << 60.00
        << endl;

   return 0;
}


