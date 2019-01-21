//
// Created by hassan on 1/17/19.
//

#include "Cell.h"

Cell::Cell(int x, int y, CellType type, CellCondition condition) : _x(x), _y(y), _type(type), _condition(condition),
                                                                   label("") {}


bool Cell::is_empty() const {
    return Cell::_condition == CellCondition::EMPTY;
}

void Cell::set_condition(CellCondition condition) {
    Cell::_condition = condition;
}

void Cell::set_type(CellType type) {
    Cell::_type = type;
}

bool Cell::is_disabled() const {
    return Cell::_type == CellType::DISABLED;
}

Cell::Cell() = default;
