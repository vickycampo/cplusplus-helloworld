// arrays.cpp
// program for testing out things with classes
// by Vicky Campo

#include <iostream>
#include "date.cpp"
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
	Date* otherDate = new Date( 8 , 17 , 2020 ); //calling the constructor that calls arguments

	// cout << defaultDate->getShortDate() << "\n"; // arrow operator is used when I reference a port of an objec that I habe a pointer to, I use this arrow operator.
	// cout << schoolStarts->getShortDate() << "\n";
	
	cout << defaultDate << "\n"; // arrow operator is used when I reference a port of an objec that I habe a pointer to, I use this arrow operator.
	cout << schoolStarts << "\n";

	defaultDate->setDate( 20 );
	cout << defaultDate << "\n";

	cout << Date::getNumDates() << "\n";

	cout << ( *defaultDate == *schoolStarts ) << endl;
	cout << ( *otherDate == *schoolStarts ) << endl;
}







/*******************************/ 
/*     FUNCTION DEFINITION     */
/*******************************/ 





