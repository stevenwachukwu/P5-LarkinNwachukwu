/*Written by Steve Nwachukwu and Nick Larkin*/

#ifndef game
#define game

#include "tools.hpp"
#include "dice.hpp"
#include "column.hpp"
#include "player.hpp"

class Game {
private:
    Dice* dices;
    Player player1;
    Player player2;
    Column column1;
    Column column2;

public:
    Game(); //the constructor for game
    ~Game(); //the destructor for game
    void getNewPlayer();
    void unitTest();
};
#endif
