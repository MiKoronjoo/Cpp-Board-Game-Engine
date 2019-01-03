//
// Created by hassan on 1/1/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_GAME_H
#define CPP_BOARD_GAME_ENGINE_GAME_H

#include "BoardGameObject.h"
#include "Board.h"

class Game {
private:
    Board _board;

public:
    virtual void start() = 0;

};


#endif //CPP_BOARD_GAME_ENGINE_GAME_H
