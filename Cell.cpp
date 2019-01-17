//
// Created by hassan on 1/17/19.
//

#include "Cell.h"

Cell::Cell(int x=0, int y=0) : _x(x), _y(y) {}

void Cell::set_x(int x) {
    _x = x;
}

void Cell::set_y(int y) {
    _y = y;
}

Cell::Cell() = default;
