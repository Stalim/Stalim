#include "Dealer.h"
#include "Card.h"
#include<stdlib.h>
#include<time.h>
#include<chrono>
#include<random>
#include<iostream>
using namespace std;

Dealer::Dealer()
{
	Card card;

	for (int i = 0; i < 4; i++) {
		for (int j = 0; j < 13; j++) {

			card.setRank(i);
			card.setSuit(j);

			deck[i][j] = card;

		}

	}

}


Dealer::~Dealer()
{

}

Card Dealer::dealNewCard() {

	bool drawn;
	int rank;
	int suit;

	do {
		unsigned seed = chrono::system_clock::now().time_since_epoch().count();
		default_random_engine generator(seed);
		uniform_int_distribution<int> distributionRank(0, 12);
		uniform_int_distribution<int> distributionSuit(0, 3);

		rank = distributionRank(generator);
		suit = distributionSuit(generator);


		if (deck[rank][suit].getRank() == -1 && deck[rank][suit].getSuit() == -1) {
			drawn = true;
		}
		else {
			deck[rank][suit].setRank(rank);
			deck[rank][suit].setSuit(suit);			
			return deck[rank][suit]; 
		}

	} while (drawn);

}

void Dealer::removeFromDeck(Card card) {
		
	deck[card.getRank()][card.getSuit()].setRank(-1);
	deck[card.getRank()][card.getSuit()].setSuit(-1);

}

int main() {

	Card holes[2];

	Dealer * dealer = new Dealer();

	holes[0] = dealer->dealNewCard();   // generates card
	dealer->removeFromDeck(holes[0]);   // need to call this method in order to physically remove from deck

	holes[1] = dealer->dealNewCard();
	dealer->removeFromDeck(holes[1]);

	cout << holes[0].getRank() << " " << holes[0].getSuit() << endl;
	cout << holes[1].getRank() << " " << holes[1].getSuit() << endl;

	delete dealer;

	system("pause");

	return 0;
} 