/****************************************************\
*  Program by Adam Szablya
*  fileName Stat.h
* date: 11/22/2013
*
\****************************************************/


#pragma once
#include <iostream>
#include "stdafx.h"
using namespace std;

class Stat
{
public:
	Stat(void);  //constructor
	~Stat(void);   //deconstructor


/****************************************************\
*          declarations                               *
\****************************************************/
	//int variables
	int counter;
	int PlacementCounter;
	
	//doubles
	double statArray[30];
	double mule;
	double L;
	double H;
	double sumArray;
	double MAX;
	
/****************************************************\
*          Accessors                                 *
\****************************************************/



	/****************************************************\
	*          main program function                     *
	\****************************************************/
	bool Stat::StoreValue(){ 

	cout << "Please enter your weather statistics: " << endl;
	counter=1;
	int arrayIndex = 1;
	//itterates 30 loops
	for(int i=0; i<31; ++i){
		
		cout << endl <<counter <<":  ";   // for numbering the inputs
			//checks to see if 30 is hit and stops accepting new inputs
			if(i < 30){
				//cout << endl <<counter <<" "; //for numbering the inputs
				cin >> mule;
				//cout << endl <<counter <<" "; //for numbering the inputs
				
				statArray[arrayIndex] = mule; //gets and stores variables to array
				++arrayIndex;
				counter++;
			}
			if(arrayIndex == 31)
				{
					cout << "\nNo more values can be entered you have hit your max entires of: " << counter-1 <<endl;
			
			//all the functions called below.
			Total();
			Average();
			statHighest();
			statLowest();
			return false;
			}
					
/*   //for keeping track of how many iterations
	int PlacementCounter = 0;
		while(PlacementCounter<30){

		++PlacementCounter;
		cout << statArray[PlacementCounter] << endl;

		};
		*/


	  };
	
	}


/****************************************************\
*               Array Total                          *
\****************************************************/


void Stat::Total(){
	int IndexPlacment =0;
	double sumArray=0;
	while(IndexPlacment<30){

		++IndexPlacment;
		//cout << statArray[IndexPlacment] << endl;  //for testing purposes

		sumArray+=statArray[IndexPlacment];
		};


	cout <<"Your total is: "<< sumArray<<endl;
};

/****************************************************\
*          Array average                             *
\****************************************************/
void Stat::Average(){
	double MAX = 30;
	int IndexPlacment =0;
	double sumArray=0;
	
	while(IndexPlacment<30){

		++IndexPlacment;
		//cout << statArray[IndexPlacment] << endl;  //for testing purposes

		sumArray+=statArray[IndexPlacment];
		};

	cout <<"your average is: "<<sumArray/MAX<<endl;


};

/****************************************************\
*          Array highest                              *
\****************************************************/
void Stat::statHighest(){ 
	
	H = 0;
	int IndexPlacment =0;
	
	while(IndexPlacment<30){
		++IndexPlacment;
		//cout << statArray[IndexPlacment] << endl;  //for testing purposes
		
		if(statArray[IndexPlacment]>H){

			H=statArray[IndexPlacment];
			};
		};

	cout <<"your higest statistic is: " << H << endl;
};
/****************************************************\
*          Array lowest                              *
\****************************************************/
void Stat::statLowest(){ 
	
		L=9000000000;
int IndexPlacment =0;
	while(IndexPlacment<30){
		++IndexPlacment;
		//cout << statArray[IndexPlacment] << endl;  //for testing purposes
		
		if(statArray[IndexPlacment]<L){
			L=statArray[IndexPlacment];
			};
		};
	cout << "your lowest Statistic is: " << L;
};

};

