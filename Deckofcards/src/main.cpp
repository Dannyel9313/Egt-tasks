// Fig. 8.27: main.cpp
// Card shuffling and dealing program.
#include "DeckOfCards.h" // DeckOfCards class definition#include <iostream>
using namespace std;
int main() {
	DeckOfCards deckOfCards; // create DeckOfCards object

	deckOfCards.shuffle(); // shuffle the cards in the deck
	deckOfCards.deal(); // deal the cards in the deck
	cout << endl;
//	deckOfCards.shuffle();
//	deckOfCards.secondDeal();

	cout << endl;
	cout << "Pair :";
	cout << deckOfCards.pairOfCards();
	cout << endl;
	cout << "Two pairs :";
	cout << deckOfCards.twoPairOfCards();

	cout << endl;
	cout << "Three of a kind :";
	cout << deckOfCards.threeOfKind();
	cout << endl;
	;
	cout << "Flush :";
	cout << deckOfCards.flush();
	cout << endl;
	cout << "Straight :";

	cout << deckOfCards.straight();
	cout << endl;
	return 0; // indicates successful termination
} // end main

