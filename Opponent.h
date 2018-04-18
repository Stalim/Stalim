//
// Created by bgtra on 4/17/2018.
//

#ifndef POKERGAME_OPPONENT_H
#define POKERGAME_OPPONENT_H

#include <iostream>

using namespace std;

class Opponent {

private:

    int smartPocket[2]; //Steven
    int aggressivePocket[2]; //Adam
    int blufferPocket[2]; //Billy
    int rockPocket[2]; //Robin

public:

    int getSmartPocket(); //returns array, or value of best Pocket combination?
    //int printSmartPocket(); PENDING?
    int getAggressivePocket();
    int getBlufferPocket();
    int getRockPocket();

    Opponent(int dealt[2]);



};


#endif //POKERGAME_OPPONENT_H
