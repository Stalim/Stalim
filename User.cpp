//
// Created by bgtra on 4/17/2018.
//

#include "User.h"


User::User(int dealt[2]){

    //Iterates through user's array and simply copies the dealt pocket card to it. PLACEHOLDER!
    for (int i = 0; i < 2; i++){

        userPocket[i] = dealt[i]; //Steven
    }

}

int User::getUserPocket(){

    cout << "Your card's suit: " << userPocket[0] << endl;
    cout << "Your card's value: " << userPocket [1] << endl << endl;

}