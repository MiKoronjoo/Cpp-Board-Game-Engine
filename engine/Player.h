//
// Created by hassan on 1/1/19.
//

#ifndef CPP_BOARD_GAME_ENGINE_PLAYER_H
#define CPP_BOARD_GAME_ENGINE_PLAYER_H


#include <string>
#include "objects/PieceType.h"

class Player {
public:
    std::string name;
    PieceType *piece_type;

    Player();
    ~Player();
    explicit Player(std::string name);

    Player(std::string name, PieceType *piece_type);
    Player(Player&& player);

};


#endif //CPP_BOARD_GAME_ENGINE_PLAYER_H
