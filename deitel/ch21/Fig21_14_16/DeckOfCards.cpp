// Fig. 21.15: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
using std::cout;
using std::endl;

#include <iomanip>
using std::setw;

#include "DeckOfCards.h" // DeckOfCards class definition

// no-argument DeckOfCards constructor intializes deck
DeckOfCards::DeckOfCards()
{
   for ( int i = 0; i <= 51; i++ ) 
   {
      deck[ i ].face = i % 13; // faces in order
      deck[ i ].suit = i / 13; // suits in order
      deck[ i ].color = i / 26; // colors in order
   } // end for
} // end no-argument DeckOfCards constructor

// deal cards in deck
void DeckOfCards::deal()
{
   for ( int k1 = 0, k2 = k1 + 26; k1 <= 25; k1++, k2++ ) 
      cout << "Card:" << setw( 3 ) << deck[ k1 ].face 
         << "  Suit:" << setw( 2 ) << deck[ k1 ].suit 
         << "  Color:" << setw( 2 ) << deck[ k1 ].color 
         << "   " << "Card:" << setw( 3 ) << deck[ k2 ].face
         << "  Suit:" << setw( 2 ) << deck[ k2 ].suit 
         << "  Color:" << setw( 2 ) << deck[ k2 ].color << endl;
} // end function deal



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
