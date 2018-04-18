//
// Created by bgtra on 4/17/2018.
//

#include "Opponent.h"

Opponent::Opponent(int dealt[2]) {

    //Iterates through each array and simply copies the dealt pockets to every opponent. PLACEHOLDER!
    //WORK OUT DIFFERENT OBJECTS PERTAINING TO EACH OPPONENT? ONLY ONE CASE IN CONSTRUCTOR?
    for (int i = 0; i < 2; i++){

        smartPocket[i] = dealt[i]; //Steven
        aggressivePocket[i] = dealt[i]; //Adam
        blufferPocket[i] = dealt[i]; //Billy
        rockPocket[i] = dealt[i]; //Robin
    }


}