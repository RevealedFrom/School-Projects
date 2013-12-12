/******************************************************************************
 * Bellevue Class: PROG 111
 *           Term: Fall 2013
 *     Instructor: Robert Main
 *
 * Solution/Project Name: SzablyaAdamProject7a 
 *             File Name: SzablyaAdamProject7a.cpp 
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
 *   1.0     10/18/13 11/17/2014
 *   X.Y     MM/DD/YYYY  ** Short, 1 line description of changes to program  **
 *
 * File Methods
 * ------------
 *     Name                             Description
 * ------------  --------------------------------------------------------------
 * main          Program entry point method
 * this is a bank fee system for determining how much is owed for the number of checks used.
 *
 ******************************************************************************
 */
// External Definition files
// The first inclusion file MUST always be declared and MUST be first in the list
#include "stdafx.h" // Defines IDE required external definition files
#include "Windows.h"// allows me to use the windows api.
#include <istream> // allos for manipulation of Istream data
#include <iomanip> // allows me to manipulate input & outputs
#include <iostream>  // Defines objects and classes used for stream I/O
#include <string>  // allows me to manipulate strings.

// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
                     // are utilized in this program

/******************************************************************************
    * Method: main()
    * 
    * Method Desciption
    * -----------------
    *
	* this program is a budgetting system that uses predefined budgets 
	* from the textbook to use for comparison against 
	* user imputs for that particular month to check if they went over budget or under budget
	* either wholisticly or specifically.
	*
    * Method Arguments
    * ----------------
    *   Type        Name                        Description
    * --------  -------------  ------------------------------------------------
    * double & struct    housing, utils, HouseExpence, Transport, Food, Medical, Insurance, Entertainment, Clothing, misc
				          |-used in the whole assignment for storing and refrencing data. -|

	  HANDLE output  creates refrence points for GetStdHandle(STD_INPUT_HANDLE)
	* COORD  pos   creates coordonates for the curser to go.
	*
	  Return Value
    * ------------
    *   Type                              Description
    * --------  ---------------------------------------------------------------
    *cin		takes inputs for data and variable storage.
	*cout		outputs to the console after taking all the variable and string data in
	*
    ***************************************************************************
     */

/****************************************************\
*               structures declaired here            *
\****************************************************/


	struct monthlyBudgetone
{
	double housing;
	double utils;
	double HouseExpence;
	double Transport;
	double Food;
	double Medical;
	double Insurance;
	double Entertainment;
	double Clothing;
	double misc;

	double totalExpence; // = housing +utils + HouseExpence + Transport + Food + Medical + Insurance + Entertainment + Clothing + misc;
};

/****************************************************\
*          predefined budget from textbook           *
\****************************************************/

	double housing = 500.00;
	double utils = 150.00;
	double HouseExpence = 65.00;
	double Transport = 50.00;
	double Food = 250.00;
	double Medical = 30.00;
	double Insurance = 100.00;
    double Entertainment = 150.00;
	double Clothing = 75.00;
	double misc = 50.00;

	double totalExpence = housing +utils + HouseExpence + Transport + Food + Medical + Insurance + Entertainment + Clothing + misc;

/****************************************************\
*               Set Cursor position                   *
\****************************************************/


//functions
void SetCursor(HANDLE screen, int row, int col)
{
	HANDLE output = GetStdHandle(STD_INPUT_HANDLE);
	COORD pos = { row, col };
	SetConsoleCursorPosition(screen, pos);
}


/****************************************************\
*               display prompts                       *
\****************************************************/



void displayPrompts(HANDLE screen)
{

	cout << "*************this is your defined budget****************"<<endl;

	cout << "Housing           : "<<setprecision(10) << housing <<endl;
	cout << "Utilities         : "<<setprecision(10) << utils <<endl;
	cout << "Household Expences: "<<setprecision(10) << HouseExpence <<endl;
	cout << "Transportation    : "<<setprecision(10) << Transport <<endl;
	cout << "Food              : "<<setprecision(10) << Food <<endl;
	cout << "Medical           : "<<setprecision(10) << Medical <<endl;
	cout << "Insurance         : "<<setprecision(10) << Insurance <<endl;
	cout << "Entertainment     : "<<setprecision(10) << Entertainment <<endl;
	cout << "Clothing          : "<<setprecision(10) << Clothing <<endl;
	cout << "Miscelaneous      : "<<setprecision(10) << misc <<endl;
}


/****************************************************\
*               Get user input                       *
\****************************************************/


void getUserInput(HANDLE screen, monthlyBudgetone &expence)
{

cout << "\n"<< endl;
cout << "*************please enter your expences****************"<<endl;

	SetCursor(screen, 0,14);
	cout << "Housing           : ";
	cin >> expence.housing;

	SetCursor(screen, 0,15);
	cout << "Utilities         : ";
	cin >> expence.utils;
	
	SetCursor(screen, 0,16);
	cout << "Household Expences: ";
	cin >> expence.HouseExpence;
	
	SetCursor(screen, 0,17);
	cout <<"Transportation    : ";
	cin >> expence.Transport;
	
	SetCursor(screen, 0,18);
	cout <<"Food              : ";
	cin >> expence.Food;
	
	SetCursor(screen,0, 19);
	cout <<"Medical           : ";
	cin >> expence.Medical;
	
	SetCursor(screen, 0,20);
	cout <<"Insurance         : ";
	cin >> expence.Insurance;
	
	SetCursor(screen, 0,21);
	cout <<"Entertainment     : ";
	cin >> expence.Entertainment;
	
	SetCursor(screen, 0,22);
	cout <<"Clothing          : ";
	cin >> expence.Clothing;
	
	SetCursor(screen, 0,23);
	cout <<"Miscelaneous      : ";
	cin >> expence.misc;

}


/****************************************************\
*               -DISPLAY DATA-                       *
*        initially used in the text example          *
*		          (not needed here)                  *
*					                                 *
\****************************************************/
/*
void displayData(HANDLE screen, monthlyBudgetone expences)
{
	SetCursor( screen, 1,25);
	cout << "here is the data you entered. \n";
	cout << "Housing           : " << expences.housing;
	cout << "Utilities         : " << expences.utils << endl;
	cout << "Household Expences: " << expences.HouseExpence << endl;
	cout << "Transportation    : " << expences.Transport << endl;
	cout << "Food              : " << expences.Food<< endl;
	cout << "Medical           : " << expences.Medical << endl;
	cout << "Insurance         : " << expences.Insurance << endl;
	cout << "Entertainment     : " << expences.Entertainment << endl;
	cout << "Clothing          : " << expences.Clothing << endl;
	cout << "Miscellaneous     : " << expences.misc << endl;

}
*/
/****************************************************\
*               over/under  function                 *
\****************************************************/
 
void overunder(HANDLE screen, monthlyBudgetone &expences){

	SetCursor(screen, 40,14);

if(expences.housing > housing)
	{
		
	cout << "you are over your budget by: "<< expences.housing - housing ;
	}
	else if (expences.housing<housing)
	{
		cout << "you are lower than your budget by: " << expences.housing - housing ;
	};

SetCursor(screen, 40,15);	
if(expences.utils > utils)
	{
		cout << "you are over your budget by: " << expences.utils - utils;
	}
else if (expences.utils<utils)
	{
		cout << "you are lower than your budget by: " << expences.utils - utils;
	};

SetCursor(screen, 40,16);
if(expences.HouseExpence > HouseExpence)
	{
		cout << "you are over your budget by: " << expences.HouseExpence- HouseExpence;
	}
	else if (expences.housing<housing)
	{
		cout << "you are lower than your budget by: " << expences.HouseExpence- HouseExpence;
	};

SetCursor(screen, 40,17);
if(expences.Transport > Transport)
	{
		cout << "you are over your budgetby: " << expences.Transport- Transport;
	}
else if (expences.Transport<Transport)
	{
		cout << "you are lower than your budget by: " << expences.Transport- Transport;
	};

SetCursor(screen, 40,18);
if(expences.Food > Food)
	{
		cout << "you are over your budget by: " << expences.Food-Food;
	}
else if (expences.Food<Food)
	{
		cout << "you are lower than your budget by: " << expences.Food-Food;
	};

SetCursor(screen, 40,19);
if(expences.Medical > Medical)
	{
		cout << "you are over your budget by: " << expences.Medical-Medical;
	}
else if (expences.Medical<Medical)
	{
		cout << "you are lower than your budget by: " << expences.Medical-Medical;
	};

SetCursor(screen, 40,20);
if(expences.Insurance > Insurance)
	{
		cout << "you are over your budget by: " << expences.Insurance-Insurance;
	}
else if (expences.Insurance<Insurance)
	{
		cout << "you are lower than your budget by: " << expences.Insurance-Insurance;
	};

SetCursor(screen, 40,21);
if(expences.Entertainment > Entertainment)
	{
		cout << "you are over your budget by: " << expences.Entertainment-Entertainment;
	}
else if (expences.Entertainment<Entertainment)
	{
		cout << "you are lower than your budget by: " << expences.Entertainment-Entertainment;
	}
SetCursor(screen, 40,22);
if(expences.Clothing > Clothing)
	{
		cout << "you are over your budget by: " << expences.Clothing-Clothing;
	}
else if (expences.Clothing < Clothing)
	{
		cout << "you are lower than your budget by: " << expences.Clothing-Clothing;
	};

SetCursor(screen, 40,23);
if(expences.misc > misc)
	{
		cout << "you are over your budget by: " << expences.misc-misc;
	}
else if (expences.misc < misc)
	{
		cout << "you are lower than your budget by: " << expences.misc-misc;
	};




}

/****************************************************\
*               Main starts here                     *
\****************************************************/


int main()
{  

// monthly budget multipliers
	static monthlyBudgetone budget;
	static monthlyBudgetone expence;
	
// get handle to standard output device
	HANDLE screen = GetStdHandle(STD_OUTPUT_HANDLE);

//function prototypes
	displayPrompts(screen);
	getUserInput(screen, expence);
	//displayData(screen, expence);
	overunder(screen, expence);

 double expenceout = expence.housing + expence.utils + expence.HouseExpence + expence.Transport + expence.Food
		+ expence.Insurance + expence.Medical + expence.Entertainment + expence.Clothing + expence.misc;



 //expence out can not be defined outside of main for some reason i think because of placment.
 if(expenceout > totalExpence)
	 {
	cout << "\nyou are over your total budget! \n";
	}
 else if (expenceout < totalExpence)
	{
		cout << "\nyou are lower than total your budget \n";
	};
	

// This prevents the Console Window from closing during debug mode
	cin.ignore(cin.rdbuf()->in_avail());
	cout << "\nPress only the 'Enter' key to exit program: ";
	cin.get();

	return 0;
};

