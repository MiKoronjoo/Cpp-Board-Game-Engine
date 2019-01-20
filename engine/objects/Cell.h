//
// Created by hassan on 1/17/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_CELL_H
#define CPP_BOARD_GAME_ENGINE_CELL_H


#include <string>

enum CellType {
    TEMPORARILY,
    DISABLED,
    ENABLED,
};

enum CellCondition {
    EMPTY,
    FULL
};

class Cell {
private:
    int _x;
    int _y;

    CellCondition _condition;
    CellType _type;

public:
    std::string label;
    Cell(int x, int y, CellType type, CellCondition condition);

    Cell();

    bool is_empty() const;
};


#endif //CPP_BOARD_GAME_ENGINE_CELL_H
