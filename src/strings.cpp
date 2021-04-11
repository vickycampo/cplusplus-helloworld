// arrays.cpp
// program for testing out things with arrays
// by Vicky Campo

#include <iostream>
#include <cstring> //working with c-strings
#include <cctype>  //working with chars
#include <string>  //for the string class

/* cpluplus.com*/

using namespace std;

/*******************************/ 
/*    FUNCTION DECLARATION     */
/*******************************/ 



/*******************************/ 
/*            MAIN             */
/*******************************/ 
void strings ()
{
	/* TWO TYPES OF STRINGS */
	/*
	 * C-STRING -> C++ DEFAULT STRING TYPE 
	 * STRING CLASS STRINGS -> BETTER TO USE THIS ONES 
	*/
	
	//C-STRINGS
	char name[10] = "Jane";
	for ( int i = 0 ; i < 10 ; i ++ )
	{
		std::cout << name[i] << " - ";
	} 
	std::cout << std::endl;
	
	name[4] = 't';
	name[5] = 0;
	
	for ( int i = 0 ; i < 10 ; i ++ )
	{
		std::cout << name[i] << " ";
	} 
	std::cout << std::endl;
	//STRING CLASS STRINGS 
	string second_name = "Janet";
	
	std::cout << "second_name" << std::endl;
	std::cout << second_name << std::endl;
	std::cout << second_name.length() << std::endl;	
	std::cout << second_name.size() << std::endl;
	
	string name2;
	string name3;
	string name4;
	
	std::cout << "Enter your name: ";
	std::cin >> name2;
	std::cin >> name3;
	std::cout << name2 << endl;
	std::cout << name3 << endl;
	getline ( std::cin , name4 );
	std::cout << name4 << endl;
}







/*******************************/ 
/*     FUNCTION DEFINITION     */
/*******************************/ 





