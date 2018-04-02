#ifndef DEALER_H
#define DEALER_H
#include "Card.h"

class Dealer
{
private:
	Card deck[4][13];     // creats deck of cards
public:
	Dealer();
	~Dealer();
	Card dealNewCard();                 // generates random card, if already removed, generatetes another random card
	void removeFromDeck(Card card);  // Needs to be called after each dealNewCard method call to mark card as removed
};

#endif
