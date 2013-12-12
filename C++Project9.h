#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <time.h>
#include "stdafx.h"
#pragma once

using namespace std;
/****************************************************\
*          Variable declarations                     *
\****************************************************/
int arrayOne[8];
int arrayTwo[8];
int swapHoldertwo;
int swapHolder;

/****************************************************\
*          Class starts below                        *
\****************************************************/

class Project9
{
public:
	Project9(void);
	~Project9(void);


/****************************************************\
*          main programming space                    *
\****************************************************/
int Project9::mainSpace(){
	//cout <<"this is a main test";
	//cout << "into array";
	
	ArrayAssignment();
	
	//cout << "into bubble for testing"; 
	//bubblesort();
	return true;
};



/****************************************************\
*       --- Functions declaired bellow---            *
\****************************************************/

	/****************************************************\
	*          Assignment                                 *
	\****************************************************/

int Project9::ArrayAssignment(){ //assigns numbers to the arrays.
   	
	srand(time(0));
	
		for(int i = 0; i < 8; ++i){
		
		int randomNum = 1+(rand()%30);
		arrayOne[i]=randomNum;
		arrayTwo[i]=randomNum;
		
		};
		cout <<endl<<endl;	
/****************************************************\
*          Assignment Output                         *
\****************************************************/
	cout << "first array: \n";
		for(int i = 0; i < 8 ;++i){
			
				cout <<arrayOne[i]<<" ";
			};
		cout <<endl<<endl;
	
	cout << "seccond array: \n";
		for(int i = 0; i < 8 ;++i){
			
				cout <<arrayTwo[i]<<" ";
			};
		cout <<endl<<endl;	
		
		bubblesort();
			cout << endl;
		selectionSort();
		

		return true;
};


/****************************************************\
*          sorting                                   *
\****************************************************/
int Project9::bubblesort(){ //set to sort in decending order
	cout << "this is a bubbleSort \n";
	int index;
	int sort;
		
	for(index = 0; index < 7; ++index){
		
		for(sort = index+1; sort < 8; ++sort){
			
			if(arrayOne[index] < arrayOne[sort]){
			
			swapHolder = arrayOne[index];
			arrayOne[index] = arrayOne[sort];
			arrayOne[sort] = swapHolder;
			
			};
		};
	};
	
	for (int index = 0; index <= 7; index++)
	{
		cout << arrayOne[index] << " ";
	};

	cout <<endl;
	return true;
};


int Project9::selectionSort(){   //se to sort in accending order
	cout << "this is a selection sort: \n";
	int index;
	int sort;

	for(index = 0; index < 7; ++index){
		
		for(sort = index+1; sort < 8; ++sort){
			
			int swapHoldertwo;
			if(arrayTwo[index] > arrayTwo[sort]){
			
			swapHoldertwo = arrayTwo[index];
			arrayTwo[index] = arrayTwo[sort];
			arrayTwo[sort] = swapHoldertwo;
			
			};
		};
	};
	
	for (int i = 0; i <= 7; ++i)
	{
		cout << arrayTwo[i] << " ";
	};

	cout <<endl;
	return true;
};








};
