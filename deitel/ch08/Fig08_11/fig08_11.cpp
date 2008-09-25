// Fig. 8.11: fig08_11.cpp
// Printing a string one character at a time using
// a nonconstant pointer to constant data.
#include <iostream>
using std::cout;
using std::endl;

void printCharacters( const char * ); // print using pointer to const data

int main()
{
   const char phrase[] = "print characters of a string";

   cout << "The string is:\n";
   printCharacters( phrase ); // print characters in phrase
   cout << endl;
   return 0; // indicates successful termination
} // end main

// sPtr can be modified, but it cannot modify the character to which
// it points, i.e., sPtr is a "read-only" pointer
void printCharacters( const char *sPtr )
{
   for ( ; *sPtr != '\0'; sPtr++ ) // no initialization
      cout << *sPtr; // display character without modification
} // end function printCharacters

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
