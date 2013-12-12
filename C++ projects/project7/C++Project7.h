
//header file documents for car.h
//programmer: Adam Szablya
//
#pragma once
#include "winsock2.h"
#include <iostream>
#include <string>

using namespace std;


#ifndef CarClass_H
#define CarCass_H


/****************************************************\
*          class defined here                        *
\****************************************************/


class CarClass{
private: 
	//member vairables
	    int NewYear;
		int NewSpeed;
		string NewMake;

		int speed;

public:
	CarClass startcar(int NewYear, string NewMake){
	
		cout << "please enter the cars year: ";
		cin >> NewYear;

		cout << "please enter the cars make: ";
		cin >> NewMake;

		NewSpeed = speed;
		speed = 0;
		
	};

/****************************************************\
*           Accelerate and brake                      *
\****************************************************/

	CarClass accelerate(int NewSpeed){
		NewSpeed = speed+5;
	};


CarClass brake(){
		NewSpeed = speed-5;
	};

};


/****************************************************\
*          old commented code below                  *
\****************************************************/

/*
int main()
{

	
	carClass carobj;
	carobj.accessor();
	
	//carobj.accelerate; cout << carobj.speed << "\n";

	carClass accelerate; cout << carobj.speed << "\n";

	carClass brake; cout << carobj.speed << "\n"; 

	return 0;
}
*/
#endif
