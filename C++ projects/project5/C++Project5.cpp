/******************************************************************************
 * Bellevue Class: PROG 111
 *           Term: Fall 2013
 *     Instructor: Robert Main
 *
 * Solution/Project Name: SzablyaAdamProject5  
 *             File Name: SzablyaAdamProject5.cpp 
 *
 * This file defines the entry point method, main(), for a C++ Console
 * application. When the executable file is selected for execution, the OS
 * will transfer execution to the first line of code in method main(). Other
 * methods called from main() may be defined here as well.
 *
 * Programmer: Adam Szablya			
 *
 * Revision     Date                        Release Comment
 * --------  ----------  ------------------------------------------------------
 *   1.0     10/25/13 Initial Release
 *   X.Y     MM/DD/YYYY  ** Short, 1 line description of changes to program  **
 *
 * File Methods
 * ------------
 *     Name                             Description
 * ------------  --------------------------------------------------------------
 * main          Program entry point method

 * this is a random number guessing game
 *
 ******************************************************************************
 */
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
#include <iostream>  // Defines objects and classes used for stream I/O
#include <iomanip>
#include <ctime>	// for use with srand() function
// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
                     // are utilized in this program

/******************************************************************************
    * Method: main()
    * 
    * Method Desciption
    * -----------------
    *
	*this program is a random number generator and guess counter program.
	*It will take the user input for a requested guess 
	*and compair it with the random number that was generated.
	*The result is a good game that is fun to play.
	*
	*
    * Method Arguments
    * ----------------
    *   Type        Name                        Description
    * --------  -------------  ------------------------------------------------
    * -Variables-
	* const int RANDOM = 1+rand()%100;  -- variable for creating a random number.
	* int guess = 0;	--varaible for the user to pass their guess to.
	* counter = 0;		-- varaible for counting the number of time it while loop, loops.
	*-funtions -
	* rand() -- for initial generation of a number
	* srand() -- for passing changes to the seeded algorythim of the rand() function
	* time() -- passes time as a variable based on the computers clock.
    * 
	*- Looping constructs-
	* while -- for looping the game till RANDOM and guess are equal.
	* 
	* Return Value
    * ------------
    *   Type                              Description
    * --------  ---------------------------------------------------------------
    *cin		takes inputs for data and variable storage.
	*cout		outputs to the console after taking all the variable and string data in
	*
    ***************************************************************************
     */
int main()
{
//functions used listed below
	srand(time(0));//for chaning the seeded random algorythim to make a more unpredictable random number using time.

// variables declaied here
	const int RANDOM = 1+rand()%100;
	int guess = 0;
	int counter = 0;

 //while loop starts below this line for repetition of guessing.
cout << "the system has generated a random number between 1 and 100 \nplease try to guess the number: "<< endl;
 while (guess != RANDOM)
 {
	 ++counter;
	 RANDOM;
		
		cin >> guess; // for user input
			
			// the following code is for comparison of the random number and the guess.
			if (guess > RANDOM)
			{
			cout << "You guessed too high try again." << endl;
			//cout << RANDOM; // for testing purposes only.
			}
			else if (guess < RANDOM)
			{
				cout << "you guessed too low please try again" << endl;
			//cout << RANDOM; // for testing purposes only
			}
			else if (guess == RANDOM)
			{
				cout << "Congrats! you guessed the random number! it only took you " << counter << " times to guess \ncorrectly." << endl;
			//cout << RANDOM; // for testing purposes only
			}

 }
		
	// This prevents the Console Window from closing during debug mode
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "\nPress only the 'Enter' key to exit program: ";
	cin.get();

	return 0;
}

