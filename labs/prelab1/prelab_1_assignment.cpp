// Pre-Lab 1 Assignment

//Copy and Paste this code into your IDE and complete the requested items.

#include <iostream>

using namespace std;

int main()
{
    // 1.
    // There are a several errors with the below code
    // Fix the syntax and logical errors.

    // The Program should take two integers from the user and assign them to x and y.
    // The program should then print the square of x and y + 10

    int x;
	int y;

	cout << "Enter the value for X" << endl;
	cin >> x;

	cout << "Enter the value for Y" << endl;
	cin >> y;

	x = x * x;

	y += 10;

	cout << "X squared = " << x << endl
	     << "Y + 10  = " << y << endl;



    // 2.
    // Write code that takes the number of pounds the user
    // can lift (use cin), divides that number by 2.20462, and then
    // prints it to the screen. This will convert pounds to kg.
    // (200 pounds is equal to 90.7186 kilograms)

	cout << "Many pounds can you lift?" << endl;

	// write your code here

	double pounds;
	double kilograms;

	cin >> pounds;

	kilograms = pounds / 2.20462;

    cout << pounds << " lbs is " << kilograms << " kg, therefore you can lift " << kilograms << " kg.";

	return 0;
}
