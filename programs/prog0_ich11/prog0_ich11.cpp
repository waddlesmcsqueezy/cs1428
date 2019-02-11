/*
   File: prog0_ich11.cpp

   Author: Ian Harmon
   C.S.1428.251
   Lab Section: L06
   Program: #0
   Due Date: 01/30/19

   This program
     - writes the student's name on the 1st line of output, last name first.
       e.g. Smith, John
     - writes 'C.S.1428.?' (without quotation marks) on the 2nd line of
       output with the student's lecture section number in place of the
       question mark
     - writes 'Lab Section: L?' (without quotation marks) on the 3rd line of
       output with the student's two-digit lab section number in place of the
       question mark
     - writes this program's due date on the fourth line of output
     - leaves line five blank
     - writes 'I am majoring in ? with a minor in ?.'(without quotation marks)
       on the 6th line of output with the student's major and minor in place
       of the question marks
       Note: the keyword 'minor' might be replaced with a keyword
       'specialization' or 'concentration' depending on the student

   Input: none
   Constants: none
   Output (screen): Sample Output:

           Boop, Betty
           C.S.1428.?        // '?' represents the lecture section number
           Lab Section: L?   // '?' represents the two-digit lab section number
           --/--/--          // dashes represent due date, month/day/year
                <blank line>
           I am majoring in Pig Latin with a minor in Underwater Polo.
*/

#include <iostream>

using namespace std;

int main ( )
{
   cout << "Harmon, Ian" << endl
        << "C.S.1428.251" << endl
        << "Lab Section: L06" << endl
        << "01/30/19" << endl << endl;

   cout << "I am majoring in Computer Science with a minor in Mathematics." << endl;

   return 0;
}
