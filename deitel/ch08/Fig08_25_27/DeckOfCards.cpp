// Fig. 8.26: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
using std::cout;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

#include <cstdlib> // prototypes for rand and srand
using std::rand;
using std::srand;

#include <ctime> // prototype for time
using std::time;

#include "DeckOfCards.h" // DeckOfCards class definition

// DeckOfCards default constructor initializes deck
DeckOfCards::DeckOfCards()
{
   // loop through rows of deck
   for ( int row = 0; row <= 3; row++ )
   {
      // loop through columns of deck for current row
      for ( int column = 0; column <= 12; column++ )
      {
         deck[ row ][ column ] = 0; // initialize slot of deck to 0
      } // end inner for
   } // end outer for
   
   srand( time( 0 ) ); // seed random number generator
} // end DeckOfCards default constructor

// shuffle cards in deck
void DeckOfCards::shuffle()
{
   int row; // represents suit value of card
   int column; // represents face value of card

   // for each of the 52 cards, choose a slot of the deck randomly
   for ( int card = 1; card <= 52; card++ ) 
   {
      do // choose a new random location until unoccupied slot is found
      {
         row = rand() % 4; // randomly select the row (0 to 3)
         column = rand() % 13; // randomly select the column (0 to 12)
      } while( deck[ row ][ column ] != 0 ); // end do...while

      // place card number in chosen slot of deck
      deck[ row ][ column ] = card;
   } // end for
} // end function shuffle

// deal cards in deck
void DeckOfCards::deal()
{
   // initialize suit array
   static const char *suit[ 4 ] = 
      { "Hearts", "Diamonds", "Clubs", "Spades" };

   // initialize face array
   static const char *face[ 13 ] = 
      { "Ace", "Deuce", "Three", "Four", "Five", "Six", "Seven", 
      "Eight", "Nine", "Ten", "Jack", "Queen", "King" };

   // for each of the 52 cards
   for ( int card = 1; card <= 52; card++ )
   {
      // loop through rows of deck
      for ( int row = 0; row <= 3; row++ )
      {
         // loop through columns of deck for current row
         for ( int column = 0; column <= 12; column++ )
         {
            // if slot contains current card, display card
            if ( deck[ row ][ column ] == card ) 
            {
               cout << setw( 5 ) << right << face[ column ] 
                  << " of " << setw( 8 ) << left << suit[ row ]
                  << ( card % 2 == 0 ? '\n' : '\t' );
            } // end if
         } // end innermost for
      } // end inner for
   } // end outer for
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
