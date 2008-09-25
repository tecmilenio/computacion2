// Fig. 4.21: fig04_21.cpp
// Preincrementing and postincrementing.
#include <iostream>
using std::cout;
using std::endl;

int main()
{
   int c;

   // demonstrate postincrement
   c = 5; // assign 5 to c
   cout << c << endl; // print 5
   cout << c++ << endl; // print 5 then postincrement
   cout << c << endl; // print 6                     

   cout << endl; // skip a line

   // demonstrate preincrement
   c = 5; // assign 5 to c  
   cout << c << endl; // print 5                    
   cout << ++c << endl; // preincrement then print 6
   cout << c << endl; // print 6
   return 0; // indicate successful termination
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
