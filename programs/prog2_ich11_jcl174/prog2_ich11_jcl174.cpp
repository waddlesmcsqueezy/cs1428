/*
   File: prog2_ich11_jcl174.cpp

   Author: Ian Harmon & Jacob Lantrip
   C.S.1428.251
   Lab Section: L06 & L09
   Program: #2
   Due Date: 02/17/19

   The Dimmitt Company manufactures doodles which are then shipped to
   customers. Four sizes of shipping boxes are used: Huge, Large, Medium,
   and Small holding 50, 25, 10, and 1 doodle(s) respectively. (Named
   constants are used as needed to represent the number of doodles each
   size container can hold.)

   =======================================================================

   This program prompts the user to enter the number of doodles to be
   shipped then calculates the number of each size container needed for
   the shipment. After all calculations are performed, the program prints
   the author's identifying information followed by the results as shown
   below. The output is printed both to the console screen and to an output
   file.

   An appropriate message is displayed to the console screen if the output
   file fails to open.

   An appropriate message is written to the console screen informing the
   user of the output file name to which the results have been written.

   The mod operator is used to solve this problem.

   Shown below is a sample layout for console output. Two blank lines are
   left after the prompt before printing the author's personal identifying
   information. Two blank lines are left after the last table entry before
   a message is printed to the screen letting the user know the name of the
   file to which the output has also been directed. The output is displayed
   in tabular form with a 'title' and 'column headers'. The author's
   personal information is included for identifying purposes.

   A sample layout for file output is shown below as well. With the
   exception of the prompt and the message directing the user to the
   output file, file output echoes console output.

   Input (keyboard): number of doodles to be shipped (integer)

   Constants:        HUGE = 50
                     LARGE = 25
                     MEDIUM = 10
   (integer values representing the number of doodles that fit in each box)

   Output (console): Sample screen display:

           Enter the number of doodles to be shipped: 237
               <blank line>
               <blank line>
           Author's Name
           C.S.1428.?         // '?' represents the lecture section number
           Lab Section: L?    // '?' represents the two-digit lab section number
           --/--/--           // dashes represent due date, month/day/year
               <blank line>
           For shipment of 237 doodles:
               <blank line>
           Container         Number
           ------------------------
           Huge                 4
           Large                1
           Medium               1
           Small                2
               <blank line>
               <blank line>
           Program results have also been written to prog2_?out.txt.

    Output (file - prog2_?out.txt): Sample file output:

           Author's Name
           C.S.1428.?         // '?' represents the lecture section number
           Lab Section: L?    // '?' represents the two-digit lab section number
           --/--/--           // dashes represent due date, month/day/year
               <blank line>
           For shipment of 237 doodles:
               <blank line>
           Container         Number
           ------------------------
           Huge                 4
           Large                1
           Medium               1
           Small                2

   =======================================================================

   <Output will vary based on actual input.>
*/

// Constants

const int HUGE_BOX_SIZE = 50;
const int LARGE_BOX_SIZE = 25;
const int MEDIUM_BOX_SIZE = 10;
const int SMALL_BOX_SIZE = 1;

// Variables

int doodles;
int huge_box_amount;
int large_box_amount;
int medium_box_amount;
int small_box_amount
