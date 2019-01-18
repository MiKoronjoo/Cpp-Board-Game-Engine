//
// Created by hassan on 1/1/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_GAME_H
#define CPP_BOARD_GAME_ENGINE_GAME_H

#include <vector>
#include "objects/BoardGameObject.h"
#include "objects/Board.h"
#include "Player.h"

class Game {
protected:
    Board _board;
    std::vector<BoardGameObject> _objects;
    std::vector<Player> _players;

public:
    virtual void start() = 0;

};


#endif //CPP_BOARD_GAME_ENGINE_GAME_H
