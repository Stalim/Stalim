#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main() {

    string STRING;
    ifstream openfile;
    openfile.open("PokerRules.txt");
    while (! openfile.eof()) // To get you all the lines.
    {
        getline(openfile, STRING); // Saves the line in STRING.
        cout << STRING << "\n"; // Prints our STRING.
    }
    openfile.close();


    return 0;
}


