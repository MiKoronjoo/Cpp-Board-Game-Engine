//
// Created by hassan on 1/18/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_MINESWEEPER_H
#define CPP_BOARD_GAME_ENGINE_MINESWEEPER_H

#include "../engine/BoardGameEngine.h"
#include <string>
#include <iostream>

class MSPlayer: public Player {
public:
    unsigned int mines;
    MSPlayer();
};

class MSPieceType : public PieceType {
private:
    std::string color;
public:
    const std::string &getColor() const;

public:
    explicit MSPieceType(std::string color);
    //MSPieceType(const MSPieceType& sag):color(sag.getColor()){}
};


class MSBoard : public Board {
private:
    unsigned int _mines;

public:
    MSBoard(int length, int width, int mines);

    void show() override;

    bool choose_cell(int x, int y) override;
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
