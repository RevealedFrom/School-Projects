/******************************************************************************
 * Bellevue Class: PROG 111
 *           Term: Fall 2013
 *     Instructor: Robert Main
 *
 * Solution/Project Name: SzablyaAdamProject6b  
 *             File Name: SzablyaAdamProject6b.cpp 
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
 *   1.0     10/29/13  Initial Release
 *   X.Y     MM/DD/YYYY  ** Short, 1 line description of changes to program  **
 *
 * File Methods
 * ------------
 *     Name                             Description
 * ------------  --------------------------------------------------------------
 * main          Program entry point method
 * This is a program that determines the actual score a contestant recieves from a judge.
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
    * This is a program tetemines the population based on death and births
	*
	*
	*
    * Method Arguments
    * ----------------
    *   Type        Name                        Description
    * --------  -------------  ------------------------------------------------
    * -Variables-
	*double population = 0;  take the population input
	double deathRate = 0;	take the death input
	double birthRate = 0; take the birth input
	double inYears = 0; take the input for years
    * newPopulation = population*(1+ModBirthrate)*(1-ModDeathrate);

	*- Looping constructs-
	* for loop -- for looping till the number of years are met..
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

	//variables start here
double population = 0;
double deathRate = 0;
double birthRate = 0;
//double ModBirthrate = birthRate /modifier;
//double ModDeathrate = birthRate/modifier;
double inYears = 0;
//double newPopulation = population*(1+ModBirthrate)*(1-ModDeathrate);


	//code starts here


//asking user for input
cout << "please enter the worlds starting population" <<endl;
	cin >> population;

cout << "please enter the worlds birth rate" <<endl;
cin >> birthRate;
birthRate = birthRate / population;
//cout << birthRate;
cout << "please enter the worlds death rate" <<endl;
	cin >> deathRate;
	deathRate = deathRate / population;
	//cout << deathRate;
cout << "please enter the number of years you wish to calculate" <<endl;
cin >> inYears;

cout << endl << endl;


	//output starts here

for(int y=0; y<inYears; y++){
	double newPopulation = population*(1+birthRate)*(1-deathRate);
	
	cout << endl;
	cout << newPopulation;

population = newPopulation;
};


// This prevents the Console Window from closing during debug mode
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "\nPress only the 'Enter' key to exit program: ";
	cin.get();

	return 0;
};

