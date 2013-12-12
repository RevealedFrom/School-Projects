/******************************************************************************
 * Bellevue Class: PROG 111
 *           Term: xxxx yyyy    (Ex: Fall 2013)
 *     Instructor: Robert Main
 *
 * Solution/Project Name: szablyaPRoject6a.sln
 *             File Name: szablyaProject6a.cpp
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
 *   1.0     10/31/2013  Initial Release
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
#include <iostream>  // Defines objects and classes used for stream I/O

// Namespaces utilized in this program
using namespace std; // Announces to the compiler that members of the namespace "std"
                     // are utilized in this program

/******************************************************************************
    * Method: main()
    * 
    * Method Desciption
    * -----------------
    * the methods in this program takes inputs from a judge and outputs the final score as an average.
    *
    * Method Arguments
    * ----------------
    *   Type        Name                        Description
    * --------  -------------  ------------------------------------------------
    * 
    *
    * Return Value
    * ------------
    * *   Type                              Description
    * --------  ---------------------------------------------------------------
    *cin		takes inputs for data and variable storage.
	*cout		outputs to the console after taking all the variable and string data in
    ***************************************************************************
     */



using namespace std;
double getJudgeData();
double findLowest(double, double, double, double, double);
double findHighest(double, double, double, double, double);
double calcScore(double, double, double, double, double);
 

int main() {
        double judge1, judge2, judge3, judge4, judge5, totalScore; //You should start your variables with a lowercase letter ^^
        cout << "Judge 1: \n";
        judge1 = getJudgeData();
 
        cout << "\nJudge 2: \n";
        judge2 = getJudgeData();
 
        cout << "\nJudge 3: \n";
        judge3 = getJudgeData();
 
        cout << "\nJudge 4: \n";
        judge4 = getJudgeData();
 
        cout << "\nJudge 5: \n";
        judge5 = getJudgeData();
 
        double lowestScore = findLowest(judge1, judge2, judge3, judge4, judge5);
        cout << "The lowest score is: " << lowestScore << "\n\n";
 
        double highestScore = findHighest(judge1, judge2, judge3, judge4, judge5);
        cout << "The highest score is: " << highestScore << "\n\n";
 
        totalScore = calcScore(judge1, judge2, judge3, judge4, judge5);
        cout << "The final score from the judges is: " << totalScore <<endl;
 
        cin.ignore(cin.rdbuf()->in_avail());
    cout << "\nPress only the 'Enter' key to exit program: ";
    cin.get();
        return 0;
}
 
//This function will INFINITE LOOP if you enter in something OTHER than a number!!
double getJudgeData() {
        double input = -1;
        while (input < 0 || input > 10) {
                cout << "Please enter in the score for this judge: " << endl;
                cin >> input;
                if (input < 0 || input > 10) {
                        cout << "Incorrect input. Please enter in a score between 0 and 10." << endl << endl;
                } else {
                        return input;
                }
        }
}
 
double findLowest(double j1, double j2, double j3, double j4, double j5) {
        if(j1 <= j2 && j1 <= j3 && j1 <= j4 && j1 <=j5) {
        return j1;
        } else if (j2 <= j1 && j2 <= j3 && j2 <= j4 && j2 <= j5) {
        return j2;
        } else if(j3 <= j1 && j3 <= j2 && j3 <= j4 && j3 <= j5) {
        return j3;
        } else if (j4 <= j1 && j4 <= j2 && j4 <= j3 && j4 <= j5) {
        return j4;
        } else {
        return j5;
        }
}
 
 
double findHighest(double j1, double j2, double j3, double j4, double j5) {
        if(j1 >= j2 && j1 >= j3 && j1 >= j4 && j1 >=j5) {
        return j1;
        } else if (j2 >= j1 && j2 >= j3 && j2 >= j4 && j2 >= j5) {
        return j2;
        } else if(j3 >= j1 && j3 >= j2 && j3 >= j4 && j3 >= j5) {
        return j3;
        } else if (j4 >= j1 && j4 >= j2 && j4 >= j3 && j4 >= j5) {
        return j4;
        } else {
        return j5;
        }
};
 
double calcScore(double j1, double j2, double j3, double j4, double j5) {
    return (j1 + j2 + j3 + j4 + j5)/5;
};

