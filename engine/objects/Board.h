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

public:
    std::vector<std::vector<Cell>> _board;

    Board();

    Board(int length, int width);

    virtual void show() = 0;

    virtual bool choose_cell(int x, int y) = 0;
};


#endif //CPP_BOARD_GAME_ENGINE_BOARD_H
