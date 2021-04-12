// arrays.cpp
// program for testing out things with classes
// by Vicky Campo

#include <iostream>
#include "date.h"
using namespace std;

/*******************************/ 
/*    FUNCTION DECLARATION     */
/*******************************/ 



/*******************************/ 
/*            MAIN             */
/*******************************/ 
void classes ()
{
	/* LEARNING HOW CLASSES WORK */

	// Date defaultDate; 
	// Date schoolStarts( 8 , 17 , 2020 ); //calling the constructor that calls arguments

	// cout << defaultDate.getShortDate() << "\n";
	// cout << schoolStarts.getShortDate() << "\n";

	// defaultDate.setDate( 20 );
	// cout << defaultDate.getShortDate() << "\n";
	
	
	Date* defaultDate = new Date(); 
	Date* schoolStarts = new Date( 8 , 17 , 2020 ); //calling the constructor that calls arguments

	cout << defaultDate->getShortDate() << "\n";
	cout << schoolStarts->getShortDate() << "\n";

	defaultDate->setDate( 20 );
	cout << defaultDate->getShortDate() << "\n";
}







/*******************************/ 
/*     FUNCTION DEFINITION     */
/*******************************/ 





