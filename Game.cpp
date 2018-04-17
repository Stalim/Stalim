//
// Created by Dean Banh on 3/27/2018.
//

#include "Game.h"
#include "Dealer.h"
#include "Card.h"

using namespace std;

//Implement Game.h's methods

//Constructor
Game::Game() {


}

void Game::printMainMenu() {


}

void Game::readRules() {


}

void Game::startBlinds() {


}

void Game::startPreFlop() {


}

void Game::startFlop() {


}

void Game::startTurn() {


}

void Game::startRiver() {


}

void Game::startShowdown() {

    cout << "Showdown commenced." << endl;

}

void Game::displayPlayerStats() {


}

void Game::playerAction() {


}

//----------------------------------------------------------------------------------------------------------------------


int main() {

    //Switch case statements, make room for Preethi/Paige's intro, flow of the game and the turns (no output)
    //Bad input checks

    bool startGame = true;
    int choice = 0;
    bool inputCheck;

    cout << "Paige's opening and description" << endl;

    //PUT ALL OF PAIGE/PREETHI'S WORK HERE!!!!!

    //Try opening game prompt-
    try {

        cout << "Press 1 to start game," << "\nPress 0 to quit" << endl;
        cin >> choice;
        inputCheck = cin.fail();

        if (inputCheck) {

                cin.clear();
                cin.ignore();
                cout << endl;
                cout << "Invalid Input" << endl << endl;
                return 0;
        }

        if (choice < 0 || choice > 1) {

                throw invalid_argument("Invalid input");
        }

    }

    catch (invalid_argument) {

            cout << "Invalid input" << endl << endl;
            return 0;
    }

    //If anything other than 1, close game
    if (choice  != 1)
        return 0;

    //Important: Game object for method access!
    Game * poker =  new Game();


    //Main game loop
    while (choice != 4) {

        //Pre-Flop options
        cout << "Pre-Flop:" << endl << endl;
        cout << endl;
        cout << "Type the number corresponding with your move below:" << endl;
        cout << "1. Call" << endl;
        cout << "2. Raise" << endl;
        cout << "3. Fold" << endl;
        cout << "4. Quit game" << endl << endl;

        //Catch bad input
        try {

            cin >> choice;
            inputCheck = cin.fail();

            if (inputCheck) {

                cin.clear();
                cin.ignore();
                cout << endl;
                cout << "Invalid Input" << endl << endl;
                continue;
            }

            if (choice < 1 || choice > 5) {

                throw invalid_argument("Invalid input");
            }

        }

        catch (invalid_argument) {

            cout << "Invalid input" << endl << endl;
            continue;
        }

        //Pre-Flop choice implementation
        switch (choice) {

            case 1:

                cout << "Placeholder 1a" << endl << endl;
                break;

            case 2:

                cout << "Placeholder 2a" << endl << endl;
                break;

            case 3:

                cout << "Placeholder 3a" << endl << endl;
                break;

            case 4:

                return 0;


        }

        //--------------------------------------------------------------------------------------------------------------

        //Flop, Turn, and River options
        for (int counter = 0; counter < 3; counter++)
        {
            if (counter == 0)
                cout << "Flop:" << endl << endl;

            else if (counter == 1)
                cout << "Turn:" << endl << endl;

            else
                cout << "River:" << endl << endl;

            cout << endl;
            cout << "Type the number corresponding with your move below:" << endl;
            cout << "1. Bet/Raise" << endl;
            cout << "2. Check" << endl;
            cout << "3. Call" << endl;
            cout << "4. Fold" << endl;
            cout << "5. Quit game" << endl << endl;

            //Catch bad input
            try {

                cin >> choice;
                inputCheck = cin.fail();

                if (inputCheck) {

                    cin.clear();
                    cin.ignore();
                    cout << endl;
                    cout << "Invalid Input" << endl << endl;
                    continue;
                }

                if (choice < 1 || choice > 5) {

                    throw invalid_argument("Invalid input");
                }

            }

            catch (invalid_argument) {

                cout << "Invalid input" << endl << endl;
                continue;
            }

            //Flop, Turn, and River choice implemenetation
            switch (choice) {

                case 1:

                    cout << "Placeholder 1b" << endl << endl;
                    break;

                case 2:

                    cout << "Placeholder 2b" << endl << endl;
                    break;

                case 3:

                    cout << "Placeholder 3b" << endl << endl;
                    break;

                case 4:

                    cout << "Placeholder 4b" << endl << endl;
                    break;

                case 5:

                    return 0;

            }

        }

        //Showdown implementation
        poker -> startShowdown();

        cout << "End of betting round, starting new game" << endl << endl;
        cout << "---------------------------------------" << endl << endl;

    }

    return 0;

}

//----------------------------------------------------------------------------------------------------------------------
