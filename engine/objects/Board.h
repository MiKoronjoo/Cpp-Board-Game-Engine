//
// Created by hassan on 1/1/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_BOARD_H
#define CPP_BOARD_GAME_ENGINE_BOARD_H

#include "BoardGameObject.h"
#include "Cell.h"
#include <vector>

class Board : public BoardGameObject {
protected:
    int _length;
    int _width;

    std::vector<std::vector<Cell>> _board;

public:
    Board();

    Board(int length, int width);

    ~Board();

    virtual void show() = 0;
};


#endif //CPP_BOARD_GAME_ENGINE_BOARD_H
