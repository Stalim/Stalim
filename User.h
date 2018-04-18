//
// Created by bgtra on 4/17/2018.
//

#ifndef POKERGAME_USERPLAYER_H
#define POKERGAME_USERPLAYER_H

#include <iostream>

using namespace std;


class User {

private:

    int userPocket[2];

public:

    int getUserPocket(); //returns array, or value of best hand combination?
    //int printUserPocket(); PENDING?

    User(int dealt[2]);





};


#endif //POKERGAME_USERPLAYER_H
