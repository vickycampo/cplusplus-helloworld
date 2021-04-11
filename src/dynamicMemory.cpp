// arrays.cpp
// program for testing out things with arrays
// by Vicky Campo

#include <iostream>
using namespace std;

/*******************************/ 
/*    FUNCTION DECLARATION     */
/*******************************/ 
void addItem ( int newItem , int*& scores , int& numItems , int&capacity ); //ADDS AN ITEM TO AN ARRAY


/*******************************/ 
/*            MAIN             */
/*******************************/ 
void dynamicMemory ()
{
	int *intPtr = new int;
    *intPtr = 5;
    intPtr = new int;
    *intPtr = 10;

    int capacity = 2; 
    int numItems = 0;
    int* scores = new int[capacity];

    int previousTotal = 0;
    for ( int i = 0; i < 10 ; i ++ )
    {        
        previousTotal = previousTotal + i;        
        addItem ( previousTotal , scores , numItems , capacity ); 
        // cout << i << " - " << previousTotal <<  " - " << scores[i] << "\n";
    }
    cout << "\n";
    cout << "CAPACITY: " << capacity << "\n"; 
    cout << "NUM OF ITEMS: " << numItems << "\n"; 
    previousTotal = 0;
    for ( int i = 0; i < numItems ; i ++ )
    {
        previousTotal = previousTotal + i;    
        cout << i << " - " << previousTotal <<  " - " << scores[i] << "\n";
    }


    // int scores2[100]; //THIS ONE DOESN'T GET INITIALIZED 
    // int* scores = new int[100]; //THIS ONE GETS INITIALIZED WITH 0
    // for ( int i = 0; i < 100 ; i ++ )
    // {
    //     cout << scores[i] << " "; 
    // }
    // cout << endl;
    // for ( int i = 0; i < 100 ; i ++ )
    // {
    //     cout << scores2[i] << " "; 
    // }



    // cout << endl;
    // int *ptr1 , *ptr2; 
    // ptr1 = new int;
    // *ptr1 = 5; //ASSIGN 5 TO THE MEMORY LOCATION

    // ptr2 = ptr1; //ptr2 POINTING TO THE SAME MEMORY LOCATION AS PTR1

    // delete ( ptr2 ); 
    // cout << "DELETED PTR2" << endl;
    //delete ( ptr1 ); -> THIS WILL THROW AN ERROR BECAUSE BOTH POINTERS ARE REFERENCING THE SAME MEMORY LOCATION. AND IT WAS ALREADY DELETED PREVIOUSLY. 
    //cout << "DELETED PTR1" << endl;

}

/*******************************/ 
/*     FUNCTION DEFINITION     */
/*******************************/ 
void addItem ( int newItem , int*& scores , int& numItems , int&capacity )
{
    if ( numItems == capacity ) 
    {
        /* NEED TO GROW THIS ARRAY */
        capacity = capacity * 2; 
        /* NEED A NEW ARRAY */
        int* temp = new int[ capacity ];
        for ( int i = 0 ; i < numItems ; i ++ )
        {
            temp[i] = scores[i];
            // cout << i << " - " << temp[i] <<  " - " << scores[i] << "\n";
        }
        /* PASS THE TEMP TO SCORES */
        delete [] scores;
        scores = temp;
    }
    scores[numItems] = newItem;
    numItems++;
}




