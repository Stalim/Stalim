#ifndef CARDS_H
#define CARDS_H

class Card
{
private: 
	int rank;
	int suit;

public:
	Card();
	int getRank();
	int getSuit();
	void setRank(int rank);
	void setSuit(int suit);
};

#endif 