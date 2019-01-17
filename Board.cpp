//
// Created by hassan on 1/1/19.
//

#include "Board.h"

Board::Board(int length, int width) : _length(length), _width(width) {
    _board = new Cell *[length];
    for (int i = 0; i < length; i++) {
        _board[i] = new Cell[width];
    }
    for (int i = 0; i < length; i++) {
        for (int j = 0; j < width; ++j) {
            _board[i][j].set_x(i);
            _board[i][j].set_y(j);
        }
    }
}

Board::~Board() {
    for (int i = 0; i < _length; i++) {
        delete[] _board[i];
    }
    delete[] _board;

}
