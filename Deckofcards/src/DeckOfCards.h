// Fig. 8.25: DeckOfCards.h
// Definition of class DeckOfCards that 
// represents a deck of playing cards.

// DeckOfCards class definition
class DeckOfCards {
public:
	bool straight();
	bool flush();
	bool threeOfKind();
	bool twoPairOfCards();
	bool pairOfCards();
	DeckOfCards(); // constructor initializes deck
	void shuffle(); // shuffles cards in deck
	void deal(); // deals cards in deck
//	void secondDeal();
//	const int* getSecondHandcol() const;
//	const int* getSecondHandrow() const;

private:
//	int secondHandrow[5];
//	int secondHandcol[5];
	int handcol[5];
	int handrow[5];
	int deck[4][13]; // represents deck of cards
};
// end class DeckOfCards

