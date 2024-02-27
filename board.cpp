/*Written by Steve Nwachukwu and Nick Larkin*/
#include "board.hpp"
Board::Board() {} //the constructor for board

Board::~Board(){}  //the destructor for board

ostream& Board::print (ostream& boardOutput) {
   for (int k = 0; k < 13; k++) {
       boardOutput << backBone[13] << "|";
   }
   boardOutput << currentPlayer;
   return boardOutput;
}

void Board::startTurn(Player* playerMoving) {
    currentPlayer = playerMoving;
    towerCounter = 0;
    towerDetector[0] = 0;
    towerDetector[1] = 0;
    towerDetector[2] = 0;
}

bool Board::move(int columnVal) {
columnVal = 3;
if (backBone[columnVal]->getState() == 1 || backBone[columnVal]->getState() == 2 ) {
    return false;
     }
else if (towerCounter == 3) {
    return false;
    }
else {
 backBone[columnVal] -> move();
    return true;
  }
}

void Board::stop() {
for (int k = 0; k < towerCounter; k++) {
    int columnNum = towerDetector[k];
    backBone[columnNum]->stop(currentPlayer);
    }
}

void Board::bust() {
for (int k = 0; k < towerCounter; k++) {
    int columnNum = towerDetector[k];
    backBone[columnNum]->bust(); //the function does not do anything yet because there's no instructions for it
    }
}
