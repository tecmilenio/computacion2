// Exercise 6.50: ex06_50.cpp
// What does this program do?
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int mystery( int, int ); // function prototype
      
int main()
{
   int x, y;
   
   cout << "Enter two integers: ";
   cin >> x >> y;
   cout << "The result is " << mystery( x, y ) << endl;

   return 0; // indicates successful termination
} // end main
   
// Parameter b must be a positive integer to prevent infinite recursion
int mystery( int a, int b )
{
   if ( b == 1 ) // base case
      return a;
   else // recursive step
      return a + mystery( a, b - 1 );
} // end function mystery


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
