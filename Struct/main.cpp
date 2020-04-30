#include <iostream>
#include <cstring>

using namespace std;


// define structure
struct Player{
    string name;
    string surname;
    string profession;
    int uniformNum;
};

// declare and define function for printing struct properties
void printStruct(struct Player * player){
    cout << "Player: " << player->name + " " + player->surname << endl;
    cout << "Player`s uniform number: " << player->uniformNum << endl;
}


int main() {
    // create instance of player
    struct Player playerOne;
    struct Player playerTwo;

    // define prop. of playerOne
    playerOne.name = "Modric";
    playerOne.surname = "Luca";
    playerOne.profession = "Midfielder";
    playerOne.uniformNum = 10;

    // define prop. of playerTwo
    playerTwo.name = "Sergio";
    playerTwo.surname = "Ramos";
    playerTwo.profession = "Defender";
    playerTwo.uniformNum = 4;

    // see result
    printStruct(&playerOne);
    printStruct(&playerTwo);


    return 0;
}
