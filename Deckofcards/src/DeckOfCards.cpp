// Fig. 8.26: DeckOfCards.cpp
// Member-function definitions for class DeckOfCards that simulates
// the shuffling and dealing of a deck of playing cards.
#include <iostream>
using std::cout;
using std::left;
using std::right;

#include <iomanip>
using std::setw;

#include <cstdlib>using std::rand;using std::srand;

#include <ctime>using std::time;
#include "DeckOfCards.h"
DeckOfCards::DeckOfCards() {

	for (int row = 0; row <= 3; row++) {

		for (int column = 0; column <= 12; column++) {
			deck[row][column] = 0;
		}
	}
	for (int i = 0; i < 5; i++) {
		handrow[i] = 0;
		handcol[i] = 0;
	}
	srand(time(0)); //

}

void DeckOfCards::shuffle() {
	int row;
	int column;


	for (int card = 1; card <= 52; card++) {
		do
		{
			row = rand() % 4;
			column = rand() % 13;
		} while (deck[row][column] != 0);


		deck[row][column] = card;
	}
}

bool DeckOfCards::pairOfCards() {
	int counter[13] = { 0 };
	for (int i = 0; i < 5; i++) {


		counter[handcol[i]]++;
	}

for(int i = 0; i < 13; i++){
	//cout << counter[i]<< " ";

}

		for (int i = 0; i < 13; i++) {
			if (counter[i] == 2) {
			return true;
		}

	}
		return false;
}



bool DeckOfCards::twoPairOfCards() {
	int counter[13] = { 0 };
for (int i = 0; i < 5; i++) {
	counter[handrow[i]]++;
int count = 0;
for (int i = 0; i < 13; i++) {
	if (counter[i] == 2) {
	count++;

}
if(count > 1){
	return true;
}
}

}
return false;
}

bool DeckOfCards::threeOfKind() {
	int counter[13] = { 0 };
	for (int i = 0; i < 5; i++) {


		counter[handcol[i]]++;
	}

for(int i = 0; i < 13; i++){
	//cout << counter[i]<< " ";

}

		for (int i = 0; i < 13; i++) {
			if (counter[i] == 3) {
			return true;
		}

	}
		return false;
}

bool DeckOfCards::flush() {
	int counter[4] = {0};
	for(int i = 0; i < 5; i ++){

		counter[handrow[i]]++;
	}
	for(int i = 0; i < 4; i++){
		if(counter[i] == 4){

			return true;

		}


	}
	return false;

}

// deal cards in deck
void DeckOfCards::deal() {
// initialize suit array
static const char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };

// initialize face array
static const char *face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
		"Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
int i = 0;
// for each of the 52 cards
for (int card = 1; card <= 5; card++) {
	// loop through rows of deck
	for (int row = 0; row <= 3; row++) {
		// loop through columns of deck for current row
		for (int column = 0; column <= 12; column++) {
			// if slot contains current card, display card
			if (deck[row][column] == card) {
				cout << setw(5) << right << face[column] << " of " << setw(8)
						<< left << suit[row] << (card % 2 == 0 ? '\n' : '\t');
				handrow[i] = row; // 2  0  3  0  1   clubs  hearts  spades  hearts  diamonds
				handcol[i] = column;




				i++;
			}
		}
	}
}
//for(int i = 0; i < 13; i++){
//	cout << handcol[i] << "\n";// end outer for
//}
} // end function deal

bool DeckOfCards::straight() {

	int min = handcol[0];

	for(int i = 0; i < 5; i++){
		if(min > handcol[i]){
			min = handcol[i];
		}

	}
	int nextCard = min + 1;
	for(int i = 0; i < 5; i++){
		if(handcol[i]==nextCard){
			nextCard++;

		}
	}
if((min+5) == nextCard){
	return true;
}
else
{
return false;
}


}














//void DeckOfCards::secondDeal() {
//	// initialize suit array
//	static const char *suit[4] = { "Hearts", "Diamonds", "Clubs", "Spades" };
//
//	// initialize face array
//	static const char *face[13] = { "Ace", "Deuce", "Three", "Four", "Five", "Six",
//			"Seven", "Eight", "Nine", "Ten", "Jack", "Queen", "King" };
//	int i = 0;
//	// for each of the 52 cards
//	for (int card = 1; card <= 5; card++) {
//		// loop through rows of deck
//		for (int row = 0; row <= 3; row++) {
//			// loop through columns of deck for current row
//			for (int column = 0; column <= 12; column++) {
//				// if slot contains current card, display card
//				if (deck[row][column] == card) {
//					cout << setw(5) << right << face[column] << " of " << setw(8)
//							<< left << suit[row] << (card % 2 == 0 ? '\n' : '\t');
//					//handrow[i] = row; // 2  0  3  0  1   clubs  hearts  spades  hearts  diamonds
//					//handcol[i] = column;
//
//
//
//
//
//					i++;
//				} // end if
//
//			} // end innermost for
//		} // end inner for
//	}
//	//for(int i = 0; i < 13; i++){
//	//	cout << handcol[i] << "\n";// end outer for
//	//}
//} // end function deal
//
////const int* DeckOfCards::getSecondHandcol() const {
////	return secondHandcol;
////}
////
////const int* DeckOfCards::getSecondHandrow() const {
////	return secondHandrow;
////}
