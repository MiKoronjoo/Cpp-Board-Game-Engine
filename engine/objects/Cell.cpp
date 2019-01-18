//
// Created by hassan on 1/17/19.
//

#include "Cell.h"

Cell::Cell(int x, int y, CellType type = DISABLED) : _x(x), _y(y), _type(type), _condition(EMPTY) {}

void Cell::set_x(int x) {
    _x = x;
}

void Cell::set_y(int y) {
    _y = y;
}

bool Cell::is_empty() const {
    return _condition == EMPTY;
}

Cell::Cell() = default;
