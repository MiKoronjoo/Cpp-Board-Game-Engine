//
// Created by hassan on 1/17/19.
//

#include "Cell.h"

Cell::Cell(int x, int y, CellType type, CellCondition condition) : _x(x), _y(y), _type(type), _condition(condition),
                                                                   label("") {}


bool Cell::is_empty() const {
    return _condition == EMPTY;
}

Cell::Cell() = default;
