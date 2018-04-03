//
// Created by bgtra on 3/27/2018.
//

#ifndef POKERGAME_GAME_H
#define POKERGAME_GAME_H

#include <iostream>

using namespace std;

class Game {

private:

    int gameNumber;
    int numActivePlayers;
    int player;
    int potMoney;
    int bigBlind;
    int smallBlind;
    int playerTurn;
    int betRound;
    int currentCallAmount;
    int currentRaiseAmount; //Relevance?!? Redundant?
    //Cards communityCards[];

public:

    Game();
    void printMainMenu();
    void readRules();
    void startBlinds();
    void startPreFlop();
    void startFlop();
    void startTurn();
    void startRiver();
    void startShowdown();
    void displayPlayerStats();
    void playerAction(); //What is this?



};







#endif //POKERGAME_GAME_H
