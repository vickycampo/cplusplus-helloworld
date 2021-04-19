// functionsPractice.cpp
// program for testing out things with functions
// by Vicky Campo

#include <iostream>
using namespace std;

const double SALES_TAX = 0.075;

/*******************************/ 
/*    FUNCTION DECLARATION     */
/*******************************/ 

void computeTax ( double subTotal , double& tax , double& total, double taxRate = SALES_TAX ); // Function to calculate the tax 


/*******************************/ 
/*            MAIN             */
/*******************************/ 
void functionsPractice ()
{
	double subTotal = 10.0;
	double tax = 0;
	double total = 0;
	
	computeTax ( subTotal , tax , total);
	std::cout << "tax: " << tax << " total: " << total << endl;	
}







/*******************************/ 
/*     FUNCTION DEFINITION     */
/*******************************/ 

void computeTax ( double subTotal , double& tax , double& total , double taxRate )
{
	tax = subTotal * taxRate;
	total =  subTotal + tax;
	return;
}




