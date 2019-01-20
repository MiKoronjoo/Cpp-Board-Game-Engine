//
// Created by hassan on 1/18/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_MINESWEEPER_H
#define CPP_BOARD_GAME_ENGINE_MINESWEEPER_H

#include "../engine/BoardGameEngine.h"
#include <string>


class MSPieceType : public PieceType {
private:
    std::string color;
public:
    const std::string &getColor() const;

public:
    explicit MSPieceType(std::string color);
};


class MSBoard : public Board {
private:
    unsigned int _mines;

public:
    MSBoard(int length, int width, int mines);

    void show() override;

};


class MineSweeper : public Game {
public:
    MineSweeper(std::string palyer1_name, std::string palyer2_name, unsigned int length, unsigned int width,
                unsigned int mines);

    MineSweeper() = default;
    ~MineSweeper();

    void start() override;
};


#endif //CPP_BOARD_GAME_ENGINE_MINESWEEPER_H
