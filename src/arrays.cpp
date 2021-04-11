// arrays.cpp
// program for testing out things with arrays
// by Vicky Campo

#include <iostream>
using namespace std;

/*******************************/ 
/*    FUNCTION DECLARATION     */
/*******************************/ 



/*******************************/ 
/*            MAIN             */
/*******************************/ 
void arrays ()
{
	int length = 5;
	int arr[ length ] = {0};
	int matrix [ length ][ length ] = {0};
	for ( int i = 0 ; i < length ; i ++ )
	{
		std::cout << "arr - " << i << " - "<< arr[i] << std::endl;
		for ( int j = 0 ; j < length ; j ++ )
		{
			std::cout << "matrix - " << i+j << " - "<< matrix[i][j] << std::endl;
		}
	}
}







/*******************************/ 
/*     FUNCTION DEFINITION     */
/*******************************/ 





