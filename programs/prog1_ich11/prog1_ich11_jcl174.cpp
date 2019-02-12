/*
   File: prog1_ich11_jcl174.cpp

   Author: Ian Harmon & Jacob Lantrip
   C.S.1428.251
   Lab Section: L06 & L07
   Program: #1
   Due Date: 02/13/19

   Prix fixe (pronounced "prefix") menus are common in Europe. A prix fixe
   menu typically includes a number of pre-determined items presented as a
   multi-course meal at a set price. Prix fixe options may include just one
   menu selection or a few different menu selections. For example, one
   evening, a restaurant may offer a four course prix fixe menu of escargot
   for the first course, beef bourguignon (boo r-geen-yuhn) for the second,
   a cheese platter for the third, and creme brulee for dessert. A second
   option that same evening might include an appetizer of oysters on the
   half shell for the first course, followed by an endive (on deev) salad
   for the second, an entree of chicken marsala for the third, and chocolate
   ganache for dessert. The prix fixe menu for the evening (along with its
   cost) is typically posted on a message board outside the restaurant.

   A French restaurant, Ma Cherie, typically offers only one four course
   prix fixe meal each evening. On special occasions, however, they offer
   two five course prix fixe menu choices. For people who wish to celebrate
   Valentine's Day at Ma Cherie, two prix fix menu choices are offered.
   (The same menu choice is served for each member of a party.)

   Sample menu choices are shown below:

             39.95
        First Course: escargot
        Second Course: beef bourguignon
        Third Course: a cheese platter
        Dessert: creme brulee
        Ligueur: Chambord (shahn-bawr) black raspberry liqueur

        OR

             54.95
        First Course: oysters on the half shell
        Second Course: endive salad with sun-dried tomato
        Third Course: chicken marsala
        Dessert: chocolate ganache
        Liqueur: green chartreuse (shar trus) liqueur

   =======================================================================

   This program prompts the user for the price of the prix fixe meal
   ordered. It then prompts the user for the number of prix fixe meals
   ordered by the customer(s). The program calculates the total cost of
   the meal(s), the sales tax, the tip, and the total amount due. The
   program then prints in receipt form the individual price of one prix
   fixe meal, the number of prix fixe meals ordered, the total for all
   prix fixe meals ordered, the sales tax, the tip and total amount due.

   Sample layout of a receipt is shown below.

   Input (keyboard): prix fixe meal price (double)
                     number of guests     (integer)
   Constants:
          Sample Values:
              SALES TAX RATE = .0825      (double)
              TIP PERCENTAGE = .15        (double)
   Output (console):
          Sample Layout:

           Betty Boop
           C.S.1428.?         // '?' represents the lecture section number
           Lab Section: L?    // '?' represents the two digit lab section number
           --/--/--           // dashes represent due date, month/day/year
                 <blank line>
           Prix Fixe Price:    $   50.00
                                 x     8
           Total for 8 meals:     400.00
           Sales Tax @8.25%        33.00
           15% Tip                 64.95
           Total Due:          $  497.95

   =======================================================================

   <Output will vary based on actual input and values used for constants.>
*/

#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main ( )
{
    const double TAX_RATE = 0.0875;
    const double TIP_PERCENTAGE = 0.20;

    int customer_count;

    double meal_price,
           subtotal,
           tax_amount,
           tip_amount,
           total;

    cout << "Please enter the price of the prix fixe meal ordered: ";

    cin >> meal_price;

    cout << "Please enter the amount of guests: ";

    cin >> customer_count;

    cout << endl << endl
         << "Harmon, Ian & Lantrip, Jacob" << endl
         << "C.S.1428.251" << endl
         << "Lab Section: L06 & L07" << endl
         << "02/13/19" << endl << endl;

    subtotal = meal_price * customer_count;

    tax_amount = subtotal * TAX_RATE;

    tip_amount = TIP_PERCENTAGE * (subtotal + tax_amount);

    total = subtotal + tip_amount + tax_amount;

    cout << fixed << setprecision(2)
         << "Prix Fixe Price:" << setw(5) << "$" << setw(8) << meal_price
         << endl
         << setw(23) << "x" << setw(6) << customer_count << endl
         << "Total for " << customer_count << " meals:" << setw(11)
         << subtotal << endl
         << "Sales Tax @" << TAX_RATE * 100 << "%:" << setw(12) << tax_amount
         << endl << fixed << setprecision(0)
         << "Tip @" << TIP_PERCENTAGE * 100 << "%:" << setw(20)
         << fixed << setprecision(2) << tip_amount << endl
         << "Total Due:" << setw(11) << "$" << setw(8) << total << endl;

    system("PAUSE>NUL");

    return 0;
}
