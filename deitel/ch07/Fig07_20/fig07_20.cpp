// Fig. 7.20: fig07_20.cpp
// This program sorts an array's values into ascending order.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

int main()
{
   const int arraySize = 10; // size of array a
   int data[ arraySize ] = { 34, 56, 4, 10, 77, 51, 93, 30, 5, 52 };
   int insert; // temporary variable to hold element to insert

   cout << "Unsorted array:\n";

   // output original array
   for ( int i = 0; i < arraySize; i++ )
      cout << setw( 4 ) << data[ i ];

   // insertion sort
   // loop over the elements of the array
   for ( int next = 1; next < arraySize; next++ )
   {
      insert = data[ next ]; // store the value in the current element
      
      int moveItem = next; // initialize location to place element
	  
	  // search for the location in which to put the current element     
      while ( ( moveItem > 0 ) && ( data[ moveItem - 1 ] > insert ) )
      {
         // shift element one slot to the right
         data[ moveItem ] = data[ moveItem - 1 ];
         moveItem--;
      } // end while
   
      data[ moveItem ] = insert; // place inserted element into the array
   } // end for

   cout << "\nSorted array:\n";

   // output sorted array
   for ( int i = 0; i < arraySize; i++ )
      cout << setw( 4 ) << data[ i ];

   cout << endl;
   return 0; // indicates successful termination
} // end main

/**************************************************************************
 * (C) Copyright 1992-2008 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 **************************************************************************/
