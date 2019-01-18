//
// Created by hassan on 1/1/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_BOARD_H
#define CPP_BOARD_GAME_ENGINE_BOARD_H

#include "BoardGameObject.h"
#include "Cell.h"

class Board : public BoardGameObject {
protected:
    int _length;
    int _width;

    Cell **_board;

public:
    Board();
    Board(int length, int width);
    ~Board();
};


#endif //CPP_BOARD_GAME_ENGINE_BOARD_H
