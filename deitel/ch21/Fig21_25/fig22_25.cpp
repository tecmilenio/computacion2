// Fig. 21.25: fig21_25.cpp
// Using strtod.
#include <iostream>
using std::cout;
using std::endl;

#include <cstdlib> // strtod prototype
using std::strtod;

int main()
{
   double d;
   const char *string1 = "51.2% are admitted";
   char *stringPtr;

   d = strtod( string1, &stringPtr ); // convert characters to double

   cout << "The string \"" << string1 
      << "\" is converted to the\ndouble value " << d 
      << " and the string \"" << stringPtr << "\"" << endl;
   return 0;
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
