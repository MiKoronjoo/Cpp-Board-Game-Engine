//
// Created by hassan on 1/17/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_CELL_H
#define CPP_BOARD_GAME_ENGINE_CELL_H


enum CellCondition {

};

class Cell {
    int _x;
    int _y;
    CellCondition *_condition;
public:
    Cell(int x, int y);

    Cell();

    void set_x(int x);

    void set_y(int y);
};


#endif //CPP_BOARD_GAME_ENGINE_CELL_H
