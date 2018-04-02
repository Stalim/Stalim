#include "Card.h"

Card::Card(){}

int Card::getRank() {
	return rank;
}

int Card::getSuit() {
	return suit;
}

void Card::setRank(int rank) {
	this->rank = rank;
}

void Card::setSuit(int suit) {
	this->suit = suit;
}


