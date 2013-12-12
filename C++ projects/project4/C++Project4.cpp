/******************************************************************************
 * Bellevue Class: PROG 111
 *           Term: Fall 2013
 *     Instructor: Robert Main
 *
 * Solution/Project Name: SzablyaAdamProject4  
 *             File Name: SzablyaAdamProject4.cpp 
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
 *   1.0     10/18/13 Initial Release
 *   X.Y     MM/DD/YYYY  ** Short, 1 line description of changes to program  **
 *
 * File Methods
 * ------------
 *     Name                             Description
 * ------------  --------------------------------------------------------------
 * main          Program entry point method
 * This is a math tutor program for mathematics.
 *
 ******************************************************************************
 */
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
#include <iostream>  // Defines objects and classes used for stream I/O
#include <iomanip>
#include <ctime> // for use with srand()
// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
                     // are utilized in this program

/******************************************************************************
    * Method: main()
    * 
    * Method Desciption
    * -----------------
    * ** For method main(), describe the application program from the client's
    * ** perspective, which includes any User inputs required and expected
    * ** Console output, and any other pertinent information about the program.
    * ** For other methods, describe the functionality of the method.
    * ** This WILL take several lines for a satisfactory description!
    *
    * Method Arguments
    * ----------------
    *   Type        Name                        Description
    * --------  -------------  ------------------------------------------------
    *---VARIABLES---
	* int var1 = 10+ (rand() % 40);  SETS THE RANDOM VARIABLE #1 FROM 10 - 50
	* int var2 = 10+ (rand() % 40);  SETS THE RANDOM VARIABLE #2 FROM 10 - 50
	* int varAnswer;				 CREATES A VARIABLE NAME FOR USER INPUT
	* int varSolution = var1 + var2; CREATES A VARIABLE NAME FOR THE SOLUTION TO BE COMPARED AGAINST THE USER INPUT.
	*---FUNCTIONS---
	* function  time()			USES THE COMPUTERS TIME CLOCK. WHEN COMBINED WITH SRAND IT SEEDS A CONTINUOUSLY VARIABLE INPUT.
	* function  srand()			SEEDS PARAMITERS FOR RAND()
	* function	rand()		    CREATES A RANDOM NUMBER BETWEEN A RANGE IF DEFINED AS MINUMUM + (RAND() % MAX RANGE )
	* function  setw(X)			CREATES A WIDTH OF (X) BETWEEN STRINGS AND VARIABLES.
    * 
	*Return Value
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
 	srand(time(0)); //sets the random number generator to change.
	 
 // variables declaied here
       int var1 = 10+ (rand() % 40);
	   int var2 = 10+ (rand() % 40);	
	   int varAnswer;
	   int varSolution = var1 + var2;
	   //int x = 1; //for the do while loop
	

 //code starts here for input and variable data population
		cout << "--This is your Digital Math tutor!--"<< endl;
		cout << "Today we are going to practice addition " << endl;
       
        cout << "Please answer the following questions: \n \n"<< endl; 
	//do{ //commented out to turn off
		//x++; // for ending the do while loop
		cout << setw(4) << var1 << "\n+ "<< var2 << endl;
		cout << "_____"<< endl;

		cin >> varAnswer;

		if(varAnswer == varSolution)
			cout << "Congratulations you are correct!"<< endl;
		else
			cout << "The correct answer is: " << varSolution << endl;
	//}while(x<=10); // playing around with multiple instances of the rand() function

		
	// This prevents the Console Window from closing during debug mode
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "\nPress only the 'Enter' key to exit program: ";
	cin.get();

	return 0;
}

