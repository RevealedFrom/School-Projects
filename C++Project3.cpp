/******************************************************************************
 * Bellevue Class: PROG 111
 *           Term: Fall 2013
 *     Instructor: Robert Main
 *
 * Solution/Project Name: SzablyaAdamProject3  
 *             File Name: SzablyaAdamProject3.cpp 
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
 *   1.0     10/12/13 Initial Release
 *   X.Y     MM/DD/YYYY  ** Short, 1 line description of changes to program  **
 *
 * File Methods
 * ------------
 *     Name                             Description
 * ------------  --------------------------------------------------------------
 * main          Program entry point method
 * This is a calculator that provides a means to figure out compound interest.
 *
 ******************************************************************************
 */
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
#include <iostream>  // Defines objects and classes used for stream I/O
#include <iomanip>
#include <string>
#include <cmath>
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
	* int   Time				TAKES AN INPUT FOR THE AMOUNT OF TIME FOR THE INTEREST TO BE CALCULATED AND SETS THE VARIABLE.
	* double	 Priniciple		TAKES THE INITIAL AMOUNT FOR THE CALCULATION AND SETS THE VAIRABLE FOR THE PRINCIPLE.
    * double	 InterestInput	TAKES THE INITIAL INTEREST RATE PERCENT AND SETS THE VAIRABLE FOR THE PRINCIPLE.
	* double	 InterestRate   TRANSFORMS THE VARIABLE InterestInput AND MAKES IT INTO DECIMAL FORMAT FOR EASIER USE.
	*---FUNCTIONS---
	* function	Pow(X,Y)		TAKES THE 'X' ARETHMETIC OPERATION AND RAISES IT TO THE 'Y' POWER
	* function  setw(X)			CREATES A WIDTH OF (X) BETWEEN STRINGS AND VARIABLES.
	* function  setprecision(X) SETS THE DECIMAL PRECISION OF DOUBLE OR FLOATING POINT VARIABLES.
    * manipulator Fixed			FORMATS FLOATING POINT VALUES IN A FIXED-POINT NOTATION
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

		 // variables declaied here
        int Time;
        double Principle = 0;
		double InterestInput = 0;
		
 //code starts here for input and variable data population
		cout << "The formula for the principle calculation is:\n(Principle*pow((1+(InterestRate/Time)),Time))-Principle"<< endl << endl;
        cout << "Please provide your principle amount: " << endl;
        cin >> Principle;
       
        cout << "Please enter your interest rate: "<< endl;
        cin >> InterestInput;
 
        cout << "Please enter the number of months compounded "<< endl;
        cin >> Time;
 

// output starts here
		cout << endl << endl; //for asthetics
		double InterestRate = (InterestInput/100); //output for cin cout variable population for interest
       
		cout <<"results" << endl;
        cout <<"---------------------------------------"<< endl;
		
 // lines are staggered for easier population.
        cout <<"Interst Rate" << setw(6) <<""<<InterestInput<<"%"<<endl;

        cout <<"Times Compounded"<< setw(4) << Time <<" Months"<<endl;

        cout <<"Principle "<< setw(9) << "$"<< Principle <<endl;

		cout <<"Total Interst"<< setw(6) << "$"<< fixed << setprecision(2) <<(Principle*pow((1+(InterestRate/Time)),Time))-Principle <<endl;

		cout <<"Balance "<< setw(11) <<"$"<< fixed << setprecision(2) <<Principle*pow((1+(InterestRate/Time)),Time) << endl;

        //cout <<"Balance "<< setw(11) <<"$"<< InterestRate + Principle <<endl; 
		//this is how i was doing it outside the books formula. i strugled a bit on the math


		
	// This prevents the Console Window from closing during debug mode
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "\nPress only the 'Enter' key to exit program: ";
	cin.get();

	return 0;
}

