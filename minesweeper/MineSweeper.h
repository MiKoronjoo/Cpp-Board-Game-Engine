//
// Created by hassan on 1/18/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_MINESWEEPER_H
#define CPP_BOARD_GAME_ENGINE_MINESWEEPER_H

#include "../engine/BoardGameEngine.h"
#include <string>

class MineSweeper : public Game {
public:
    MineSweeper(std::string palyer1_name, std::string palyer2_name);
    MineSweeper() = default;
    void start() override;
};


#endif //CPP_BOARD_GAME_ENGINE_MINESWEEPER_H
