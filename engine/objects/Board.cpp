//
// Created by hassan on 1/1/19.
//

#include <random>
#include <vector>
#include "Board.h"


Board::Board() = default;

Board::Board(int length, int width) : _length(length), _width(width) {
    _board.reserve(static_cast<unsigned long>(length));
    for (int i = 0; i < length; i++) {
        _board[i].reserve(static_cast<unsigned long>(width));
    }
    for (int i = 0; i < length; i++) {
        std::vector<Cell> temp;
        temp.reserve(static_cast<unsigned long>(width));
        for (int j = 0; j < width; ++j) {
            temp.emplace_back(i, j, DISABLED, EMPTY);
        }
        _board.push_back(temp);
    }
}

Board::~Board() = default;

