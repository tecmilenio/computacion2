// Fig. 7.22: fig07_22.cpp
// Initializing multidimensional arrays.
#include <iostream>
using std::cout;
using std::endl;

void printArray( const int [][ 3 ] ); // prototype

int main()
{
   int array1[ 2 ][ 3 ] = { { 1, 2, 3 }, { 4, 5, 6 } };
   int array2[ 2 ][ 3 ] = { 1, 2, 3, 4, 5 };
   int array3[ 2 ][ 3 ] = { { 1, 2 }, { 4 } };

   cout << "Values in array1 by row are:" << endl;
   printArray( array1 );

   cout << "\nValues in array2 by row are:" << endl;
   printArray( array2 );

   cout << "\nValues in array3 by row are:" << endl;
   printArray( array3 );
   return 0; // indicates successful termination
} // end main

// output array with two rows and three columns
void printArray( const int a[][ 3 ] )
{
   // loop through array's rows
   for ( int i = 0; i < 2; i++ )
   {    
      // loop through columns of current row
      for ( int j = 0; j < 3; j++ )
         cout << a[ i ][ j ] << ' ';

      cout << endl; // start new line of output
   } // end outer for
} // end function printArray


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
