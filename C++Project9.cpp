/******************************************************************************
 * Bellevue Class: PROG 111
 *           Term: xxxx yyyy    (Ex: Fall 2013)
 *     Instructor: Robert Main
 *
 * Solution/Project Name: SzablyaProject9 (Ex: PROG111_Project1)
 *             File Name: szablyaProject9.cpp       (Ex: payrate.cpp)
 *
 * This file defines the entry point method, main(), for a C++ Console
 * application. When the executable file is selected for execution, the OS
 * will transfer execution to the first line of code in method main(). Other
 * methods called from main() may be defined here as well.
 *
 * Programmer: **Your Name**
 *
 * Revision     Date                        Release Comment
 * --------  ----------  ------------------------------------------------------
 *   1.0     11/29/13  Initial Release
 *   X.Y     MM/DD/YYYY  ** Short, 1 line description of changes to program  **
 *
 * File Methods
 * ------------
 *     Name                             Description
 * ------------  --------------------------------------------------------------
 * main          Program entry point method
 * Project9.h	Hader file with the program inside. 
 * 
 *
 ******************************************************************************
 */
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h"  // Defines IDE required external definition files
#include <iostream>  // Defines objects and classes used for stream I/O
#include "Project9.h"

// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
                     // are utilized in this program

/******************************************************************************
    * Method: main()
    * 
    * Method Desciption
    * -----------------
    * Main calls an object inside a class that is within project9.h it then assigns random numbers to two identacles arrays. 
	* the arrays are then sorted individually from highest to lowest and vice versa using functions to perform this action.
    *
    * Method Arguments
    * ----------------
    *   Type        Name                        Description
    * --------  -------------  ------------------------------------------------
    * int arrayOne[8];      array one 
	  int arrayTwo[8];		array two
	  int swapHoldertwo;   placeholder two for sorting
      int swapHolder;	   placeholder one for sorting
	  int index;				index indicator for arrays
	  int randomNum;		creates a random number
	  srand()				seeds random numbers
	  rand()				function used to create random numbers
	  time(0)				uses time as a seeding paramiter.
	  ArrayAssignment()     assigns the random numbers to the arrays
	  BubbleSort()			sorts array on in decending order
	  SelectionSort()		sorts in accending order
	  mainspace()			area to call ArrayAssignment() for use in main()
    * 
    * Return Value
    * ------------
    *   Type                              Description
    * --------  ---------------------------------------------------------------
    * Return true  validates a return for each of the functions below
    *
    ***************************************************************************
     */
 int main()          
{

	Project9 projectOBJ;
	projectOBJ.mainSpace();

	// This prevents the Console Window from closing during debug mode
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "\nPress only the 'Enter' key to exit program: ";
	cin.get();

	return 0;
}
