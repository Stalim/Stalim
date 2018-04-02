#ifndef DEALER_H
#define DEALER_H
#include "Card.h"

class Dealer
{
private:
	Card deck[4][13];
public:
	Dealer();
	~Dealer();
	Card dealNewCard();
	void removeFromDeck(Card card); 
};

#endif
