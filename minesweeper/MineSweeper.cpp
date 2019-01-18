//
// Created by hassan on 1/18/19.
//

#include "MineSweeper.h"


void MineSweeper::start() {}

MineSweeper::MineSweeper(std::string palyer1_name, std::string palyer2_name) {
    _players.emplace_back(palyer1_name);
    _players.emplace_back(palyer2_name);
    //_board = new Board(7, 8);
}
