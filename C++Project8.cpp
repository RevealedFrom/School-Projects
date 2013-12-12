/******************************************************************************
 * Bellevue Class: PROG 111
 *           Term: xxxx yyyy    (Ex: Fall 2013)
 *     Instructor: Robert Main
 *
 * Solution/Project Name: SzablyaProject8      (Ex: PROG111_Project1)
 *             File Name: SzablyaStat.cpp       (Ex: payrate.cpp)
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
 *   1.0     MM/DD/YYYY  11/21/2013
 *   X.Y     MM/DD/YYYY  ** Short, 1 line description of changes to program  **
 *
 * File Methods
 * ------------
 *     Name                             Description
 * ------------  --------------------------------------------------------------
 * main          Program entry point method
 * **** Add name and description of any other methods defined in this file ****
 *
 ******************************************************************************
 */
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
#include "Stat.h"
#include <iostream>  // Defines objects and classes used for stream I/O

// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
                     // are utilized in this program

/******************************************************************************
    * Method: main()
    * 
    * Method Desciption
    * -----------------
    * This program uses chapter 8 question 9 and is a excersize in 1 dimentional arrays.
	* the program asks you for weather statistics and will only allow you to input 30 
	* 30 is the maximum legth of the array.
	* the program displays a high, low, total and average calculation based on class function conditionals.
    *
    * Method Arguments
    * ----------------
    *   Type        Name                        Description
    * --------  -------------  ------------------------------------------------
    * //int variables
	* int counter;	keeps track of index placment for testing purposes.
	* int PlacementCounter;  Keeps track of placement for value storage purposes
	*
	* //doubles
	* double statArray[30]; declares the array
	* double mule;  modifer to store the value to the array.
	* double L;  variable for Low
	* double H; variable for High
	* double sumArray; variable for Total Value of all index values added together
	* double MAX; varable set to 30 for creating the average.
    * 
    * Return Value
    * ------------
    *   Type                              Description
    * --------  ---------------------------------------------------------------
    * None		N/A
    *
    ***************************************************************************
     */


/****************************************************\
*          Constructors                                 *
\****************************************************/

	Stat::Stat(void){  //constructor


}


/****************************************************\
*          decoinstructors                           *
\****************************************************/
Stat::~Stat(void){ 

}


 int main()          
{
	Stat StatObj;
		
	StatObj.StoreValue();


	// This prevents the Console Window from closing during debug mode
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "\nPress only the 'Enter' key to exit program: ";
	cin.get();

	return 0;
}

