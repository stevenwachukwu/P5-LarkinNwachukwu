/*Written by Steve Nwachukwu and Nick Larkin*/

#include "game.hpp"

Game::Game():column1(2),column2(7), dices(new Dice (4)){
getNewPlayer();
} //constructor for game

Game::~Game() {delete dices;} //destructor for game

void Game::getNewPlayer() {
   string playerName;
   string color;
    cout << "Enter in the player 1's name:\n" << endl;
    cin >> playerName;
    cout << "Enter in the player 1's color:\n" << endl;
    cin >> color;
    int index;
    for (int k = 0; k < 5; k++ ) {
        if (colorStrings[k] == color) {
            index = k;
            cout << "Color input accepted!" << endl;
        }
    }
    player1 = Player(playerName, (ECcolor)index); //calling the Player constructor
    cout << "Enter in the player 2's name:\n" << endl;
    cin >> playerName;
    cout << "Enter in the player 2's color:\n" << endl;
    cin >> color;
    for (int k = 0; k < 5; k++ ) {
        if (colorStrings[k] == color) {
            index = k;
            cout << "Color input accepted!" << endl;
        }
    }
    player2 = Player(playerName, (ECcolor)index); //calling the Player constructor
}

void Game::unitTest() {
dices->roll();
cout << *dices << endl;
cout << player1 << endl;
cout << player2 << endl;
column2.startTower(&player1);
cout << column1 << endl;
cout << column2 << endl;
column1.startTower(&player1);
column1.move();
column1.move();
column1.move();
cout << column1 << endl;
} //the unit test utilized for game
