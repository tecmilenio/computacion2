// Fig. 8.10: fig08_10.cpp
// Converting a string to uppercase using a
// nonconstant pointer to nonconstant data.
#include <iostream>
using std::cout;
using std::endl;

#include <cctype> // prototypes for islower and toupper
using std::islower;
using std::toupper;

void convertToUppercase( char * );

int main()
{
   char phrase[] = "characters and $32.98";

   cout << "The phrase before conversion is: " << phrase;
   convertToUppercase( phrase );
   cout << "\nThe phrase after conversion is:  " << phrase << endl;
   return 0; // indicates successful termination
} // end main

// convert string to uppercase letters
void convertToUppercase( char *sPtr )
{
   while ( *sPtr != '\0' ) // loop while current character is not '\0'
   {   
      if ( islower( *sPtr ) ) // if character is lowercase,
         *sPtr = toupper( *sPtr ); // convert to uppercase

      sPtr++; // move sPtr to next character in string
   } // end while
} // end function convertToUppercase

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
