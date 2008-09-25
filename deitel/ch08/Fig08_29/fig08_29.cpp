// Fig. 8.29: fig08_29.cpp
// Demonstrating an array of pointers to functions.
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

// function prototypes -- each function performs similar actions
void function0( int );
void function1( int );
void function2( int );

int main()
{
   // initialize array of 3 pointers to functions that each 
   // take an int argument and return void
   void (*f[ 3 ])( int ) = { function0, function1, function2 };

   int choice;

   cout << "Enter a number between 0 and 2, 3 to end: ";
   cin >> choice;

   // process user's choice
   while ( ( choice >= 0 ) && ( choice < 3 ) ) 
   {
      // invoke the function at location choice in
      // the array f and pass choice as an argument
      (*f[ choice ])( choice ); 

      cout << "Enter a number between 0 and 2, 3 to end: ";
      cin >> choice;
   } // end while

   cout << "Program execution completed." << endl;
   return 0; // indicates successful termination
} // end main

void function0( int a )
{
   cout << "You entered " << a << " so function0 was called\n\n";
} // end function function0

void function1( int b )
{
   cout << "You entered " << b << " so function1 was called\n\n";
} // end function function1

void function2( int c )
{
   cout << "You entered " << c << " so function2 was called\n\n";
} // end function function2

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
