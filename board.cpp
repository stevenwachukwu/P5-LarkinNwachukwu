/*Written by Steve Nwachukwu and Nick Larkin*/
#include "board.hpp"
Board::Board() {} //the constructor for board

Board::~Board(){} //the destructor for board

ostream& Board::print (ostream& boardOutput) {
   for (int k = 0; k < 13; k++) {
       boardOutput << backBone[13] << "|";
   }
   boardOutput << currentPlayer;
   return boardOutput;
}

void Board::startTurn(Player*) {
    Player*;
    towerCounter = 0;
    towerDetector = 0;
}

